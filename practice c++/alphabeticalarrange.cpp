#include <stdio.h>
#include <stdlib.h>
struct node
{
	int item;
	struct node *next;
};
typedef struct node nd;
nd *p1,*p2;

main()
{

	p1=(nd*)malloc(sizeof(nd));
	p2=(nd*)malloc(sizeof(nd));


	p1->item=12;
	p2->item=34;

	p1=p2;
	p2->next=p1;


	printf("%d %d\n",p1->item,p1->next->item);
	printf("%d %d",p2->item,p2->next->item);



}