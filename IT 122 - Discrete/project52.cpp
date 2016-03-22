#include <stdio.h>
#include <conio.h>

main()

{
	int n,z,i,j,temp;
	char a[12];
	printf("Enter the no of inputs:");
	scanf("%d", &n);
	

	for(i=0;i<n;i++)
	{
		printf("enter a number or letter: ");
		scanf("%s",&a[i]);
	}

	int T;
	printf("input T value:1,2,3 or 4? T=\n");
	scanf("%d",&T);

	
	printf("\n\nA={");
	for(i=0; i<n-1;i++)
		{
		
		printf("%c,",a[i]);
		
		}
	printf("%c} N=%d T=%d\nLIST:\n",a[i],n,T);
	
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
			printf("%c",a[i]);
	
	if(T==1)
		for(int k=0; k<n; k++)
			printf("%c\n",a[k]);
		

	if(T==2)
		for(int z=0; z<n; z++)
			for(i=0;i<n-1;i++)
				if(a[z]>a[i+1])
					printf("%c%c\n",a[z],a[i+1]);
	if(T==3)
		for(int x=0; x<n;x++)
			for(z=0; z<n; z++)
				for(i=0;i<n-1;i++)
					if(a[z]>a[i+1] && a[x]>a[z] )
						printf("%c%c%c\n",a[x],a[z],a[i+1]);
	if(T==4)
		for(int r=0; r<n; r++)
			for(int x=0; x<n;x++)
				for(z=0; z<n; z++)
					for(i=0;i<n;i++)
						if(a[r]>a[x] && a[x]>a[z] && a[z]>a[i])
							printf("%c%c%c%c\n",a[r],a[x],a[z],a[i]);

	getch();

}


