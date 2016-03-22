#include <stdio.h>
     
int sumw(int);
     
int main()
{
	int n ;
	int aw;
     
    scanf("%d",&n);
     
    aw=sumw(n);
     
    printf("the sum is %d\n",aw);
     
    return 0;
     
    }
     
    int sumw (int n)
    {
		int sum=1;

		if(n==1)
		 return(1);
		
		else
		 return((n *(n + 1))/2);
	}
    