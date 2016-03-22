#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include "queue.h"
#include "linkedlist.h"



void main()
{
	char word[10];
	Q *q=NULL;
	Stack *head=NULL;
	bool ok;
	int c=1;

	do{
		

		printf("enter a word: ");
		gets_s(word);

		for(int i=0; i<strlen(word);i++) {
			enqueue(&q,word[i]);
			push(&head,word[i]);
		}

		ok=true;
		while(!isEmpty(head) && !isEmpty2(q))
		{
			if(pop(&head)!=dequeue(&q))
				ok=false;

		}

		if(ok)
			printf("palindrome!\n");
		else
			printf("not!\n");
		c++;

		while(!isEmpty(head))
			pop(&head);
		while(!isEmpty2(q))
			dequeue(&q);
	}while(c!=5);

	

	
	
	
	getch();


}



	




