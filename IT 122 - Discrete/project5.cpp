#include <stdio.h>
#include <conio.h>

main()

{
	int n,z,i,j,temp,a[12];
	printf("Enter the no of inputs:");
	scanf("%d", &n);
	printf("Enter %d integer numbers\n", n);

	for(i=0;i<n;i++)
	{
		printf("enter number: ");
		scanf("%d",&a[i]);
	}

	int T;
	printf("input T value:1,2,3 or 4?\n");
	printf("T=");
	scanf("%d",&T);

	
	printf("\n\nA={");
	for(i=0; i<n-1;i++)
		{
		
		printf("%d,",a[i]);
		
		}
	printf("%d} N=%d T=%d\nLIST:\n",a[i],n,T);
	
	for (i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[i]<a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}

	if(T==n)
		for(i=0; i<n; i++)
			printf("%d",a[i]);
	
	if(T==1)
		for(int k=0; k<n; k++)
			printf("%d\n",a[k]);
		

	if(T==2)
		for(int z=0; z<n; z++)
			for(i=0;i<n-1;i++)
				if(a[z]>a[i+1])
					printf("%d%d\n",a[z],a[i+1]);
	if(T==3)
		for(int x=0; x<n;x++)
			for(z=0; z<n; z++)
				for(i=0;i<n-1;i++)
					if(a[z]>a[i+1] && a[x]>a[z] )
						printf("%d%d%d\n",a[x],a[z],a[i+1]);
	if(T==4)
		for(int r=0; r<n; r++)
			for(int x=0; x<n;x++)
				for(z=0; z<n; z++)
					for(i=0;i<n;i++)
						if(a[r]>a[x] && a[x]>a[z] && a[z]>a[i])
							printf("%d%d%d%d\n",a[r],a[x],a[z],a[i]);

	getch();

}


