#include <stdio.h> 
#include <stdlib.h>
#include "BinarySearchTree.h"
#include <conio.h>

void main()

{
	system("color f0");
	BST *tree=NULL;
	BST *temp;
	int x;
	int S=0;

	AddNode(&tree,7);
	AddNode(&tree,9);
	AddNode(&tree,8);
	AddNode(&tree,10);
	AddNode(&tree,5);
	AddNode(&tree,6);
	AddNode(&tree,4);
	AddNode(&tree,3);
	printf("preorder: ");preorder(tree);
	printf("\nmaximum is %d",findMax(&tree));
	printf("\nminimum is %d",findMin(&tree));
		
do {
		printf("\n\t1.insert\n\t2.search\n\t3.check if leaf\n\t4.check if parent\n\t5.get parent\n");
		printf("\t6.preorder\n\t7.inorder\n\t8.postorder\n\t9.check if root\n\t0.exit\n");

		printf("choice: ");
		scanf_s("%d",&S);

		switch (S)
		{
		case 1:
			system("cls");
			printf("enter a number to insert: ");
			scanf_s("%d",&x);
			AddNode(&tree,x);
			break;
		case 2:
			system("cls");
			printf("enter a number to find: ");
			scanf_s("%d",&x);
			if(isExist(&tree,x))
				printf("%d found!\n",x);
			else
				printf("not found\n");
			break;
		case 3:
			system("cls");
			printf("check if leaf: ");
			scanf_s("%d",&x);
			if(isLeaf(&tree,x))
				printf("%d is a leaf!\n",x);
			else
				printf("not a leaf\n");
			break;
		case 4:
			system("cls");
			printf("check if parent: ");
			scanf_s("%d",&x);
			if(!isParent(&tree,x))
				printf("%d is a parent!\n",x);
			else
				printf("not a parent\n");

			break;
		case 5:
			system("cls");
			printf("get the parent, enter a number: ");
			scanf_s("%d",&x);
			temp=getParent(&tree,x);
			if(temp!=(BST*)x && temp!=0)
				printf("parent is %d\n",temp->x);
			else if(temp==0)
				printf("not found!\n");
			
			else if(temp==(BST*)x)
				printf("root!\n");
				
			break;

		case 6:
			system("cls");
			printf("preorder: ");
			preorder(tree);
			break;
		case 7:
			system("cls");
			printf("inorder: ");
			inorder(tree);
			break;
		case 8:
			system("cls");
			printf("postorder: ");
			postorder(tree);
			break;
		case 9:
			system("cls");
			printf("check if root: ");
			scanf_s("%d",&x);
			if(isRoot(&tree,x))
				printf("root!\n");
			else
				printf("not root!\n");
			break;
		case 10:
			system("cls");
			printf("delete: ");
			scanf_s("%d",&x);
			delet(&tree,x);
			break;

	


		default:
			break;






		}
}while(S!=0);

	



	getch();

}
