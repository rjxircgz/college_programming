#include <stdio.h>
#include <stdlib.h>
#define pr printf
#include <string.h>





struct node
{
	char word;
//	char *meaning;
//	char temp;

	struct node *next;
};

typedef struct node nd;
nd *head,*p;

void addWord(char w1)
{

	head=(nd*)malloc(sizeof(nd));
	head->word=w1;
	head->next=NULL;

	p=head;

	p->next=(nd*)malloc(sizeof(nd));
	p->next->word=w1;
	p->next->next=NULL;

}



	


void display()
{
/*	int i=0;
	do
	{
	pr("%s-\t",head->word);
	head=head->next;
	i++;
	}while(i!=count);
*/
	pr("%c\n",head->word);
		pr("%c\n",head->next->word);
//	pr("%s\n",head->next->word);
//	pr("%s\n",head->next->next->word);
//	pr("%s\n",head[0]->meaning);

}







main()

{
	char x; 
//	char y[100];
	int sw;
	int awt;


		

		do
		{
			pr("1.add word\n");
			pr("2.display dictionary\n");
			pr("0.exit\n");
			scanf("%d",&sw);
			scanf("%d",&sw);
			switch(sw)
			{
			case 1:
				pr("enter a word: ");
				scanf("%c\n",&x);
			
				addWord(x);
				pr("done adding\n");
				break;

			case 2:
				display();
				break;

			default:
				break;
		
			}	
		}while(sw!=8);
		
		
		
		


	

	




}

