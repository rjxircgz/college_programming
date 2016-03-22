#include <stdio.h>
#include <stdlib.h>

struct kahoy
{
	int item;
	struct kahoy *left;
	struct kahoy *right;
};
typedef struct kahoy tree;

tree *insert(tree *root,int x)
{
	
	if(!root)
	{
		
		root=(tree*)malloc(sizeof(root));
		root->item = x;
		root->left = NULL;
		root->right = NULL;
		return(root);
	}
	if(root->item > x)
		root->left = insert(root->left,x);
	else
	{
		if(root->item < x)
			root->right = insert(root->right,x);

	}
	return(root);
	

}

void preorder(tree *root)
{
	if(root!=NULL)
	{
		printf("%d ",root->item);
		preorder(root->left);
		preorder(root->right);

	}
	return;


}

void inorder(tree *root)
{
	if(root!=NULL)
	{
		preorder(root->left);
		printf("%d ",root->item);
		preorder(root->right);

	}
	return;


}

void display(tree *root)
{
	printf("root is %d\n",root->item);
	printf("left of root is %d\n",root->left->item);
	printf("right of root is %d\n",root->right->item);


}