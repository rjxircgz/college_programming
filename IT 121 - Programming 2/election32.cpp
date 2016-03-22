#include <stdio.h>
#include <conio.h>
#define row 4
#define col 4

main()
{
	int vote[row][col];
	int z,x,sum;
	int awk[4]; int sort[4];
	int temp,r,c,d,k,swap;

	for(z=0;z<row;z++)
		{
		for(x=0;x<col-1;x++)
			{
			printf("Presinct %d Candidate # %d: ",z+1,x+1);
			scanf("%d",&vote[z][x]);
			}
		printf("\n");
		}

	printf("\n");

	for(z=0;z<col-1;z++)
		{
		sum=0;
		printf("\t");
		for(x=0;x<row;x++)
			{
			sum=sum+vote[x][z]; 
			}
		vote[z][4]=sum;
		printf("Candidate %d = %d \n",z+1,sum);
		}

	int rar=1;

 for ( c = 0 ; c <= 4 ; c++ )
   {
       for ( d = 0 ; d <= c - 1 ; d++ )
       {
           if ( vote[c][4] < vote[d][4] )
           {
              swap = vote[d][4];
              vote[d][4] = vote[c][4];
				for ( k = c ; k > d ; k-- )
	         vote[k][4] = vote[k-1][4]; 		
 
	      vote[k+1][4] = swap;
           }
       }
   }
		
for ( c = 0 ; c < 3 ; c++ )
       printf("%d\n", vote[c][4]);


	


	getch();



}