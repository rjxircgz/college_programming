#include <stdio.h>
void main()
{
	int a,b;
	int n;
	int z;
	printf("enter number");
	scanf("%d",&n); 
	a = 1;
	b= 1;
do      
	{
	a = a*b++; 
	}while( b<=n) ;
printf("the numbers are %d \n",a);
scanf("%d",&z);



}