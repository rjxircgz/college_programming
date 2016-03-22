#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct node
{
	char num[10];
	char desc[100];
	struct node *next;
	struct node *next2;
};
typedef struct node nd;
nd *p, *list, *p2, *list2;

void addword(char *x,char *x2)
{
	
	nd *temp,*temp2;
	temp=(nd*)malloc(sizeof(nd));
	strcpy(temp->num,x);
	temp->next=NULL;
	p=list;

	temp2=(nd*)malloc(sizeof(nd));
	strcpy(temp2->desc,x2);
	temp2->next2=NULL;
	p2=list2;






	if(p==NULL)
	{
		list=temp;
		list2=temp2;
		
	
	

	}
	else
	{
		if((strcmpi(x,p->num)<0))
		{
			temp->next=p;
			list=temp;

			temp2->next2=p2;
			list2=temp2;

		
	
				
			
		}

		else
		{
			while((p->next!=NULL)&& (strcmpi(x,p->next->num)>0))
			{
				p=p->next;
				p2=p2->next2;
				
			}
			temp->next=p->next;
			p->next=temp;

			temp2->next2=p2->next2;
			p2->next2=temp2;
			
		
		}

		
	}
	
			

		




}

void display()
{
	
	p=list;
	p2=list2;
	while(p!=NULL)
	{
		
		printf("%s------\t%s\n",p->num,p2->desc);
		p=p->next;
		p2=p2->next2;
	
	}
	p2=list2;


}

void search(char *sx)
{

	p=list;
	p2=list2;
	while(p!=NULL)
	{

		if(!strcmpi(p->num,sx))
			printf("%s-\t%s\n",p->num,p2->desc);
		if(p==NULL)
		printf("not found\n");

		
	

		p=p->next;
		p2=p2->next2;
	}
	p=list;
	p2=list2;

	

	
	
	


		
		
		
		
	
	
	
}
	


main()
{

	char x[10];
	char d[100];

	int sw;






	do
	{
		printf("1.add word\n2.display the words\n3.search a word\n8.exit\n");
		scanf("%d",&sw);

		switch(sw)
		{
		case 1:
				gets(x);
				system("cls");
				printf("enter a word: ");
				gets(x);
				printf("then input its meaning: ");
				gets(d);
				addword(x,d);
				system("cls");
				printf("word added\n\n");
				
				break;

		case 2:
				system("cls");
		
				display();
				
				printf("\n\n");
				break;

		case 3:
				gets(x);
				system("cls");
				printf("enter a word to search: ");
				gets(x);
				search(x);
				system("cls");

				printf("\n\n");
				break;

		}
	}while(sw!=8);

}