#include <stdio.h>
#include <stdlib.h>

struct queue
{
	char pw;
	int x;
	struct queue *next;
};
typedef struct queue Q;
Q *p,*head;


void enqueue(Q **list,char w)
{
	Q *temp,*p;
	int c=1;
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
void display(Q *list,int z)
{
	Q *temp;
	p=head;

	
	while(p!=NULL) {
	p->x-=z;
	if(p->x > 0) {
		printf("%d ",p->x);
		p=p->next;
		temp=p;
		head=p->next;
		while(p->next!=NULL)
			p=p->next;
		p->next=temp;
	}



	
	

	
	
	



	
	}

}
