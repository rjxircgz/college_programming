#include <stdio.h>

void main()

{
	int q,w,N;
	
	do
	{
		printf("enter number of kuan\n");
		scanf("%d",&N);
		int q = 1, w=1;
		
		while(w<=N)
		{
			q=q*w++;
		
		printf("%d ",q);
		
	}
}