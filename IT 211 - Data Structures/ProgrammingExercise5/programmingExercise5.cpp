#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include "linkedlist.h"
void main()
{
	system("color F0");
	Stack *head=NULL;
	char str[20];

	printf("infix: ");
	gets(str);


	printf("postfix: ");
	for(int i=0;i<strlen(str);i++)
	{
		//basta operand kay i display
		if(str[i]!=45&&str[i]!=43 && str[i]!=42&&str[i]!=47&&str[i]!=40&&str[i]!=41)
			printf("%c",str[i]);
		//if operator kay
		if(str[i]==45||str[i]==43||str[i]==42||str[i]==47)
		{
			//basta walay sulod ang stack, i push ang operator
			if(isEmpty(head))
				push(&head,str[i]);
			//basta naay sulod kay i check niya ang precedence sa previous operator
			else
			{
				if(peek(head)==42||peek(head)==47)//if mas higher or equal ang previous operator
				{
					printf("%c",pop(&head));
					push(&head,str[i]);
				}
				else // if mas lower ang previous operator
					push(&head,str[i]);
			}
		}

		if(str[i]==40)
			push(&head,str[i]);
		if(str[i]==41)
		{
			while(peek(head)!=40)
				printf("%c", pop(&head));
			if(peek(head)==40)
				pop(&head);
		}		
	}
	while(!isEmpty(head))
		printf("%c",pop(&head));
	getch();
	
}