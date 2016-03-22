#ifndef BINARY_TREE_H
#define BINARY_TREE_H

struct kahoy
{
	int item;
	struct kahoy *left;
	struct kahoy *right;
};
typedef struct kahoy tree;

tree *insert(tree *root,int x);
void preorder(tree *root);
void inorder(tree *root);
void display(tree *root);

#endif