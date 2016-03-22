#include <stdio.h>

void main()

{
	int a,q,w,e,N;

	do
	{
		printf("enter number of kuan\n");
		scanf("%d",&N);
		int q = 0, w=1;
		e =1;
		while(e<=N)
		{
			printf("%d ",q);
			q=q+w;
			w=q-w;
			e=e+1;
		}
		printf("\ntry again?");
		scanf("%d",&a);
	}while (a==1);

}