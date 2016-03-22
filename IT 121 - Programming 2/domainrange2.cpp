#include <stdio.h>
#define p printf

main()

{
	int domain[100],range[100],n,c,x,d=0;
	int z,int v,b=0;
	



	p("Input the Domain and Range\n");
	p("enter 3 pairs:");
	
	

	for(c=0;c<3;c++)
	{
		p("Enter Domain %d\t:\t",(1)+d++);
		scanf("%d",&domain[c]);
		p("Enter Range %d\t:\t",d);
		scanf("%d",&range[c]);
	}



	printf("\nYou entered R={ ");
	
	for(c=0;c<3;c++)
		p("(%d,%d)",domain[c],range[c]);
	
	p(" }\n");

	if(domain[0] != domain[1] && domain[0] != domain[2] )
		if(range[1] !=range[0] && range[1] != range[2])
			printf("(%d,%d)",domain[0]), (range[1]);
		
	if(domain[1] != domain[0] && domain[1] != domain[2] )
		if(range[0] !=range[1] && range[0] != range[2])
			printf("(%d,%d)"),domain[1], (range[0]);
		
	if(domain[2] != domain[0] && domain[2] != domain[1] )
		if(range[2] !=range[1] && range[0] != range[2])
			printf("(%d,%d)"),domain[2], (range[2]);
		

return 0;

}