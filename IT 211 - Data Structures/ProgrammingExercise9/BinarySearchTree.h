#define BST_H

struct bst {
	int x;
	struct bst *left;
	struct bst *right;
};
typedef struct bst BST;

void AddNode(BST **tree,int x);
void preorder(BST *tree);
void inorder(BST *tree);
void postorder(BST *tree);
bool isExist(BST **tree,int x);
BST *findMax(BST **tree);
BST *findMin(BST **tree);
bool isLeaf(BST **tree,int x);
bool isParent(BST **tree,int x);
BST *getParent(BST **tree,int x);
bool isRoot(BST **tree,int x);
void delet(BST **tree,int x);
