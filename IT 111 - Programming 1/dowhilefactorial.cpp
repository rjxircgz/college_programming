#include <stdio.h>

void main()

{
	int a,q=1,w,N;

	do
	{
		printf("enter number of kuan\n");
		scanf("%d",&N);
		 
		
		while(w<=N)
		{
			printf("%d ",q);
			q=q*w;
			
			
		}
		printf("\ntry again?");
		scanf("%d",&a);
	}while (a==1);

}