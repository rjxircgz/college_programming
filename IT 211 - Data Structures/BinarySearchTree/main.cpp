#include <stdio.h>
#include "BinaryTree.h"
#include <conio.h>



void main()

{
	tree *root=NULL;
	root=insert(root,30);
	root=insert(root,23);
	root=insert(root,11);
	root=insert(root,13);
	root=insert(root,26);
	root=insert(root,40);
	root=insert(root,48);
	root=insert(root,58);

	printf("\npreorder: ");preorder(root);
	printf("\ninorder: ");inorder(root);
	//printf("\ndisplay: ");display(root);

	getch();

}