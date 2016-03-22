#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int array[10],x,i,n,k=0,h=0,j;
	int loopc=10;
	srand(time(NULL));

	do
	{
		printf("\n1.	Generate and display a random array of size 10\n\twith values between 1 and 100 \n");
		printf("2.	Find the first occurrence of a given number\n");
		printf("3.	Find the last occurrence of a given number\n");
		printf("4.	Delete a given number from the array.\n");
		printf("5.	Find Minimum\n");
		printf("6.	Print the current contents of the array.\n");
		printf("7.	Add a number to the array.\n");
		printf("8.	Quit\n");
		printf("enter your choice: ");
		scanf("%d",&x);

		if(x==1)
			for(i=0;i<10;i++)
			{
				array[i]=(rand()%100)+1;
				printf("%d\t",array[i]);
				loopc=10;
			}

		if(x==2) //first occur
		{
			printf("enter number: ");
			scanf("%d",&n);
			for(i=0;i<loopc;i++)
				if(n==array[i])
				{
					printf("number found at slot#%d\n",i+1);
					break;
				}
				
			if(i==loopc)
				printf("\nElement not present in the array\n\n");
			
			
		}

		if(x==3) //last occur
		{
			printf("enter number: ");
			scanf("%d",&n);
			for(i=loopc-1; i>=0;i--)
			{	
				if(n==array[i])
				{
					printf("number found at slot#%d\n",i+1);
					break;
				} 
				if(i==0)
					printf("\nElement not present in the array\n\n");
			
			}
		}

		if(x==4) //delete array
	{
		printf("enter number: ");
		scanf("%d",&n);
		for(i=0; i<loopc;i++)
		{

			
			if(n==array[i])
				{
				for(j=i; j<(loopc);j++)
					array[j]=array[j+1]	;
				
				printf("\nsuccessfully deleted\n\n");
				
				loopc=loopc-1;
				for(int i=0; i<loopc; i++)
					printf("%d\t",array[i]);

				printf("\n\n");
				break;
			
				}
			
		
		}
			
		if(i==loopc)
				printf("\nnot in array\n\n");
		
		
	}


	if(x==6)
		for(i=0;i<10;i++)
			printf("%d\t",array[i]);

//	if(x==7)

				
				





	}while(x!=8);



}
