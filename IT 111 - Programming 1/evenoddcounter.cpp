#include<stdio.h>

int main()
{
int num;
int oddcount,evencount,numcount;



	oddcount=0;
	evencount=0;
	
	numcount=0;


while (numcount<10)
{
printf("Enter a numbers ");
scanf("%d",&num);
	numcount++;

if (num%2 != 0)
	{
	printf("\nThe number %d Is Odd.\n",num);
	oddcount++;
	}


else if (num%2 == 0)
	{
	printf("\nThe number %d Is Even.\n",num);
	evencount++;
	}
}
	

	
	


printf("\nevencount:%d\n",evencount);
printf("oddcount: %d\n",oddcount);
return 0;
}