#include <stdio.h>
#include <stdlib.h>

struct queue
{
	char x;
	struct queue *next;
};
typedef struct queue Q;
Q *p,*head;


void enqueue(Q **list,char w)
{
	Q *temp,*p;
	temp=(Q*)malloc(sizeof(Q));
	temp->x=w;
	temp->next=NULL;
	p=head;
	

	if(p==NULL) {
		head=temp;
		
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
	
	p=head;
	while(p!=NULL)
	{
		printf("%c",p->x);
		p=p->next;

	}


}
char dequeue(Q **list)
{
	char R;
	Q *temp,*heads;
	p=head;
	temp=p;
	head=p->next;
	p=*list;

	R=temp->x;
	free(temp);
	return R;
	

}
bool isEmpty2(Q *list)
{
	p=head;
	if(head==NULL)
		return true;
	else
		return false;

}