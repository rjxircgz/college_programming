#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include "queue.h"




void main()
{
	
	Q *a=NULL;
	Q2 *b=NULL;
	int c;
	

	for(int n=1;n<=4;n++)
	{
		printf("enter P%d:",n);
		scanf("%d",&c);
		enqueue(&a,c);
		enqueue(&b,n);
	}

	printf("enter time quantum: ");
	scanf("%d",&c);

	while(!isEmpty2(a))
	{
		
		
		int sub=dequeue(&a)-c;
		int num=dequeue(&b);
		if(sub>0) {
			enqueue(&a,sub);
			enqueue(&b,num);
			printf("p%d=%d\n",num,sub);
			
			
		}
		


	}
	
	
	getch();


}



	




