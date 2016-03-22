#include<stdio.h>

int numpal(int a,int b,int c,int d,int e);

int main()
{

    int sum=0;
	int n1,n2,n3,n4,n5;

    printf("\nEnter a number: ");
    scanf("%d",&n1);
	printf("\nEnter a number: ");
    scanf("%d",&n2);
	printf("\nEnter a number: ");
    scanf("%d",&n3);
	printf("\nEnter a number: ");
    scanf("%d",&n4);
	printf("\nEnter a number: ");
    scanf("%d",&n5);

	

    sum = numpal(n1,n2,n3,n4,n5);

    if(sum==1)
         printf("%d%d%d%d%d is a palindrome\n",n1,n2,n3,n4,n5);
    else
         printf("%d%d%d%d%d is not a palindrome\n",n1,n2,n3,n4,n5);

    return 0;

}

int numpal(int a,int b,int c,int d,int e)
{

   if(a==e && b==d)
	   return (1);
   else
	   return (0);
}