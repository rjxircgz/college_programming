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

	printf("postfix: ");
	gets(str);

	for(int i=0;i<strlen(str);i++)
	{
		if(isEmpty(head))
		{
			if(str[i]!=45&&str[i]!=43 && str[i]!=42&&str[i]!=47&&str[i]!=40&&str[i]!=41)
			{
				push(&head,str[i]);
			
			}
		}

		else if(!isEmpty(head))
		{
			if(str[i]!=45&&str[i]!=43 && str[i]!=42&&str[i]!=47&&str[i]!=40&&str[i]!=41)
			{
				push(&head,str[i]);
			
			}




		}




	}



}