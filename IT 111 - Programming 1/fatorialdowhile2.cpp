#include <stdio.h>

void main()

{
	int q=1;
	int w=1;
	int e;
	printf("enter number\n");
	scanf("%d",&e);

	
	do
	{
		
		q=q*w;
			
	}while(--w<=e)	;
	printf("the factorial  of %d is %d\n",e,q);
	
	

}


