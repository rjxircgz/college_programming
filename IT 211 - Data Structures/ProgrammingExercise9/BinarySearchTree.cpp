#include <stdio.h>
#include <stdlib.h>


struct bst {
	int x;
	struct bst *left;
	struct bst *right;
};
typedef struct bst BST;
bool ok =false;
bool ok2=false;

bool isExist(BST **tree,int x)
{
	
	BST *temp;
	temp=*tree;
	if(temp==NULL)
		ok=false;
	else if(temp->x==x)
		ok=true;
	else if (temp->x!=x)
	{
		if(x<temp->x)
			isExist(&temp->left,x);
		if(x>temp->x)
			isExist(&temp->right,x);
	}
	
	return ok;

}
void AddNode(BST **tree,int x)
{
	BST *temp, *p;
	temp=*tree;
	

	temp=(BST*)malloc(sizeof(BST));
	temp->x=x;
	temp->left=NULL;
	temp->right=NULL;
	p=*tree;
	
	

	if(p==NULL) {
		*tree=temp;
	}
	if (p!=NULL)
	{
		if(x < p->x)
			AddNode(&p->left,x);
		if(x > p->x) 
			AddNode(&p->right,x);
		if (x==p->x)
			printf("duplicate\n");
		
		
		
	}
	

	
		

	

		


	

	


	


}
void preorder(BST *tree)
{
	
	
	if(tree!=NULL)
	{
		printf("%d ",tree->x);
		preorder(tree->left);
		preorder(tree->right);

	}
	
}
int countNonleaf(BST *tree)
{
	BST *p;
	p=tree;

	if(p == NULL || (p->left==NULL && p->right==NULL)) //to work for empty tree
		return 0;
	return 1 + countNonleaf(tree->left) + countNonleaf(tree->right);

}

BST *findMax(BST **tree)
{
	BST *temp,*p;
	temp=*tree;

	if(temp->right==NULL){
		temp=(BST*)temp->x;
		return temp;
	}

	if(temp->right!=NULL){
		temp=(BST*)temp->right;
		findMax(&temp);
	}
	
	

	
	

}
BST *findMin(BST **tree)
{
	BST *temp;
	temp=*tree;

	if(temp->left==NULL){
		temp=(BST*)temp->x;
		return temp;
	}

	if(temp->left!=NULL){
		temp=(BST*)temp->left;
		findMin(&temp);
	}

}
bool isLeaf(BST **tree,int x)
{
	int a=0;
	BST *p;
	p=*tree;

	if(p->left!=NULL || p->right!=NULL)
		ok2=false;
	
	if(p->left==NULL && p->right==NULL)
		ok2=true;
	
		
		
	

	else if(x<p->x){
		p=p->left;
		isLeaf(&p,x);
		}
			
	else if(x>p->x) {
		p=p->right;
		isLeaf(&p,x);
		}
		
		
	
	return ok2;
	
		
	


	

	
	
	
	

}
BST *getParent(BST **tree,int x)
{
	BST *p;
	p=*tree;

	if(!isExist(&p,x))
		return NULL;
	

	else
	{
		if(p->x==x)
			return (BST*)x;
	
		else if(p->left->x==x || p->right->x==x || (p->right==NULL || p->left==NULL) ){
			return p;
		}
		
	

	
	
		else if(x<p->x){
			p=p->left;
			getParent(&p,x);
		}
		else if(x>p->x){
			p=p->right;
			getParent(&p,x);
		}
		

	}

	
	

}
bool isParent(BST **tree,int x)
{
	
	BST *p;
	p=*tree;

	if(p->left!=NULL || p->right!=NULL)
		ok2=false;
	
	if(p->left==NULL && p->right==NULL)
		ok2=true;
	
		
		
	

	else if(x<p->x){
		p=p->left;
		isParent(&p,x);
		}
			
	else if(x>p->x) {
		p=p->right;
		isParent(&p,x);
		}
		
		
	
	return ok2;
	

}
void inorder(BST *tree)
{
	
	
	if(tree!=NULL)
	{
		
		preorder(tree->left);
		printf("%d ",tree->x);
		preorder(tree->right);

	}
	
}

void postorder(BST *tree)
{
	
	
	if(tree!=NULL)
	{
		
		preorder(tree->left);
		preorder(tree->right);
		printf("%d ",tree->x);

	}
	
}

bool isRoot(BST **tree,int x)
{
	BST *p;
	p=*tree;
	if(p->x==x)
		return true;
	else
		return false;


}

void delet(BST **tree,int x)
{
	BST *current = NULL, *del = NULL, *child = NULL;
	BST *parent = NULL, *xx = NULL;
	current = *tree; 		
	
	while (current != NULL) {		
		if (x == current->x) {
		del = current;
		//case 1: node is a leaf (no descendants)
			if ((del->left == NULL) && (del->right == NULL)) {
				//if the node to delete is to the left of root
				if (parent->left == del) {
					parent->left = NULL;
					free(del);
					printf("Node deleted\n");
					break;
				}
				//if the node to delete is to the right of root
				else if (parent->right == del) {
					parent->right = NULL;
					free(del);
					printf("Node deleted\n");
					break;
				}
			}
		//case 2: node has one child
			else if ((del->left == NULL) || (del->right == NULL)) {
					printf("Node has one child\n");
				//if the node to delete is to the left of root
					if (parent->left == del) {
						if (del->left != NULL) {
							child = del->left;
							parent->left = child;
							free(del);
							break;
					}
					else if (del->right != NULL) {
						child = del->right;
						parent->left = child;
						free(del);
						break;
					}
				}
				//if the node to delete is to the right of root
				else if (parent->right == del) {
					if (del->left != NULL) {
						child = del->left;
						parent->right = child;
						free(del);
						break;
					}
					else if (del->right != NULL) {
						child = del->right;
						parent->right = child;
						free(del);
						break;
					}
				}						
			}
		//case 3: node has two children	
			else if ((del->left != NULL) && (del->right != NULL)) {
				printf("Node has two children\n");
				xx = del;
				//if the node to delete is root
				if (parent == NULL) {
					child = del->right;
					if (child->left == NULL) {
						child->left = del->left;
						free(del);
						break;
					}
					else {
						while (child->left != NULL) {
								parent = child;
								child = parent->left;
						}
						xx->x = child->x;
						parent->left = child->right;
						del = child;
						free(del);
						break;
					}						
				}
				//if the node to delete is to the left of root
				else if (parent->left == del) {
					child = del->right;
					if (child->left == NULL) {
						parent->left = child;
						child->left = del->left;
						free(del);
						break;
					}
					else {
						while (child->left != NULL) {
								parent = child;
								child = parent->left;
						}
						xx->x = child->x;
						parent->left = child->right;
						del = child;
						free(del);
						break;
					}
				}
				//if the node to delete is to the right of root
				else if (parent->right == del) {
					child = del->right;
					if (child->left == NULL) {
						parent->right = child;
						child->left = del->left;
						free(del);
						break;
					}
					else {
						while (child->left != NULL) {
								parent = child;
								child = parent->left;
						}
						xx->x = child->x;
						parent->left = child->right;
						del = child;
						free(del);
						break;
					}
				}
			}		
		}
		//if value is less than the node's value - go left
		else if (x < current->x) {
			parent = current;
			current = current->left;
		}
		//if value is greater than the node's value - go right
		else {
			parent = current;
			current = current->right;
		}
	}		
	
}








	
	
	
	







