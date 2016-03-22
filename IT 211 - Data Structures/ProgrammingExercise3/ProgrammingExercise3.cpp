#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define p printf
#include "MatrixOperations.h"



;
void main()
{
	int arr1[10][10],choose=0,arr2[10][10];
	int x,y,x2,y2,sc;
	
		p("enter row: ");
		scanf_s("%d",&x);
		p("enter col: ");
		scanf_s("%d",&y);
		random(arr1,x,y);
	

		p("\n***MENU*** \n1.Addition\n2.Subtraction\n3.Scalar Product\n4.Matrix Product\n5.Transpose\n");
		scanf_s("%d",&choose);
		switch (choose)
		{
			case 1:
				p("enter row for the 2nd matrix: ");
				scanf_s("%d",&x2);
				p("enter column for the 2nd matrix: ");
				scanf_s("%d",&y2);
				random(arr2,x2,y2);
				
				system("cls");
				p("\n===================\n");
				display(arr1,x,y);
				p("\n+\n");
				display(arr2,x2,y2);
				p("\n=\n");
				
				if(add(arr1,arr2,x,y,x2,y2) == false)
				{
					system("cls");
					p("not allowed\n");
				}
				break;
				

			case 2:
				p("enter row for the 2nd matrix: ");
				scanf_s("%d",&x2);
				p("enter column for the 2nd matrix: ");
				scanf_s("%d",&y2);
				random(arr2,x2,y2);
				
				system("cls");
				p("\n===================\n");
				display(arr1,x,y);
				p("\n-\n");
				display(arr2,x2,y2);
				p("\n=\n");
				
				if(subt(arr1,arr2,x,y,x2,y2) == false)
				{
					system("cls");
					p("not allowed\n");
				}
				break;
				

			case 3:
				p("enter multiplier: ");
				scanf_s("%d",&sc);
				display(arr1,x,y);
				p("\nScalar Product:\n");
				scalar(arr1,x,y,sc);
				break;

			case 4:
				p("enter row for the 2nd matrix: ");
				scanf_s("%d",&x2);
				p("enter column for the 2nd matrix: ");
				scanf_s("%d",&y2);
				random(arr2,x2,y2);
				system("cls");
				p("\n===================\n");
				display(arr1,x,y);
				p("\nX\n");
				display(arr2,x2,y2);
				p("\n=\n");
				if(multiply(arr1,arr2,x2,y,x,y2) == false)
				{
					system("cls");
					p("not allowed");
				}
				break;

			case 5:
				p("\n\n");
				p("transpose :)\n\n");
				trans(arr1,x,y);
				break;
				

					



			default:
				break;

		} 
	p("\n\n");
	
	
	getch();
}
