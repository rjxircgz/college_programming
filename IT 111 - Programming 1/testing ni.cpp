#include <stdio.h>

void main()

{

	int num,q=1,sum,i=1;

	printf("enter number oh yeah\n");
	scanf("%d",&num);

	while(i<=num)
	{
		q=q*i++;
		sum=q++;
		printf("the numbers: %d\n",q);
	}

	printf("the factorial sum is %d\n",q);

}




