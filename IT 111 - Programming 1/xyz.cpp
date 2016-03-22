#include <stdio.h>

void main()


{
	int a=1;
	int b;
	int n;

	printf("enter number");
	scanf("%d",&n);

	for(b=1; b<=n;b++)
	{
		a=a*b;
	}
	printf("the factorial of %d is %d",a,n);

}
