#include <stdio.h>
#define p printf
int sum=0;

void add(int x)
{
	
	sum=sum+x;

	printf("%d\n",sum);

}

main()
{

	int i;
	int x;
		
	for(i=0;i<5;i++)
	{
		printf("enter: ");
		scanf("%d",&x);
		add(x);
	}





}

