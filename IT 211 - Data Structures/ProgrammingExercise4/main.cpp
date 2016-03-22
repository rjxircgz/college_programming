#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "linkedlist.h"


	


void main()
{
	system("color F0");
	char x[10];
	char d[100];

	int sw;






	do
	{
		printf("1.add word\n2.display the words\n3.search a word\n4.delete\n8.exit\n");
		scanf_s("%d",&sw);

		switch(sw)
		{
		case 1:
				gets_s(x);
				system("cls");
				printf("Enter the new word: ");
				gets_s(x);
				if(search(x)==0)
				{
					printf("Meaning of the word: ");
					gets_s(d);
					addword(x,d);
				}
			
				break;

		case 2:
				system("cls");
				printf("\t\tDICTIONARY\n\n\n");
				display();printf("\n\n");
				break;

		case 3:
				gets_s(x);system("cls");
				printf("enter a word to search: ");
				gets_s(x);search(x);isEmpty();
				printf("\n\n");
				break;

		case 4:
	
				system("cls");

				
				gets(x);
				printf("Enter the word you want to delete: ");
				gets(x);
				delet(x);
				printf("\n\n");
				
				break;

		}
	}while(sw!=8);

	getch();

}