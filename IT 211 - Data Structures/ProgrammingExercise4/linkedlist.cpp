#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct node
{
	char num[10];
	char desc[100];
	struct node *next;

};
typedef struct node nd;
nd *p, *list;

int search(char *sx)
{
	int found=0;
	p=list;
	if(list!=NULL) 
	{
		while(p!=NULL)
		{
		

			if(!strcmpi(p->num,sx))
			{
				printf("%s-\t%s\n",p->num,p->desc);
				found =1;
			}
		
		
			p=p->next;
		}
	}
	
		


	return found;
	
	
		
		
	

}
void addword(char *x,char *x2)
{
	nd *temp;

	
	system("cls");
	temp=(nd*)malloc(sizeof(nd));
	strcpy_s(temp->num,x);
	strcpy_s(temp->desc,x2);
	temp->next=NULL;
	p=list;
	system("cls");
	printf("success!!\n");
	

	

	if(p==NULL)
	{
		list=temp;
	}
	else
	{
		if((_strcmpi(x,p->num)<0))
		{
			temp->next=p;
			list=temp;
		}

		else
		{
			while((p->next!=NULL)&& (_strcmpi(x,p->next->num)>0))
			{
				p=p->next;
			}
			temp->next=p->next;
			p->next=temp;
		}
	}
	
			






}
void display()
{
	
	p=list;
	
	while(p!=NULL)
	{
		
		printf("%s------\t%s\n",p->num,p->desc);
		p=p->next;
		
	
	}
	p=list;
	


}
void delet(char *sy)
{
	p=list;
	nd *del,*temp;
	del=p;

	if(list!=NULL) 
	{
		if(!strcmpi(del->num,sy))
		{	
			temp=p->next;
			list=temp;
			p=list;
		
			//free(del);
			printf("success\n");
			
		}

	
		while(del->next!=NULL)
		{
			if(!strcmpi(del->next->num,sy))
			{
				temp=del->next;
				del->next=temp->next;
				free(temp);
				printf("success\n");
				break;
			}
			del=del->next;
		}

	
		//free(del);
	}
	else
		printf("dictionary is empty, nothing to delete\n");
		

	
}
void isEmpty()
{
	if(list==NULL)
		printf("dictionary is empty\n");

}


