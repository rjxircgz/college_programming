#include <stdio.h>

void main()

{
	int base; 
	int exponent;
	int x;
	int y=1;

	printf("enter base: ");
	scanf("%d",&base);
	printf("enter exponent: ");
	scanf("%d",&exponent);

	
	
		
		
		for(x=1;x<=exponent;x++)
		{
			y=y*base;
		}

	

	printf("%d",y);

}