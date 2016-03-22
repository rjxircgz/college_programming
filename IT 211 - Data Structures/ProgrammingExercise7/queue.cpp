#include <stdio.h>
#include <stdlib.h>

struct queue
{
	int x;
	struct queue *next;
};
typedef struct queue Q;
typedef struct queue Q2;



void enqueue(Q **list,int w)
{
	Q *p,*temp;
	temp=(Q*)malloc(sizeof(Q));
	temp->x=w;
	temp->next=NULL;
	p=*list;
	

	if(p==NULL) {
		*list=temp;
		
	}
		
	else{
		while(p->next!=NULL)
			p=p->next;

		temp->next=p->next;
		p->next=temp;
		
		
	}
	
	
	
}
void display(Q *list)
{
	Q *p;
	p=list;
	while(p!=NULL)
	{
		printf("%d ",p->x);
		p=p->next;

	}


}
char dequeue(Q **head)
{
	Q *temp;
	int item;
	if (*head!=NULL){
		temp = *head;
		item=temp->x;
		*head = temp->next;
		free(temp);	
		return item;
	}
	
	return '\0';
	

}
bool isEmpty2(Q *list)
{
	
	
	if(list==NULL)
		return true;
	else
		return false;

}