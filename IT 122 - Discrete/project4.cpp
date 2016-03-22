#include <stdio.h>
#define p printf

int fac(int);

main()

{

	int n,r;

	p("enter number of objects: ");
	scanf("%d",&n);
	p("enter number of objects taken: ");
	scanf("%d",&r);

	
	int fr=fac(r);
	int a=fac(n);
	int b=fac(n-r);
	int P=a/b;
	int op;

	int C=a/(fr*b);

	p("press 1 to display permutations or press 2 for combinations (1/2):");
	scanf("%d",&op);

	if(op==1)
		p("no. of permutations P(%d,%d) = %d\n",n,r,P);
	if(op==2)
		p("number of combinations: %d\n",C);


	printf("the factorial of %d is %d\n",r,fr);

}


int fac(int x)
{

	int fc;

	for (int i = 0; i <= x; i++)
	{
		if (i == 0)
		fc = 1;
		else
		fc = fc * i;
	}

	return fc;

}