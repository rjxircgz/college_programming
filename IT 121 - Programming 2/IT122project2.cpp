#include <stdio.h>
#define p printf


main()

{
	int x[100],y[100];
	int m=0;
	
	p("Input the Domain and Range (numbers only)\n");
	p("enter 3 pairs only\n");
	
	for(int c = 0; c < 3; c++)
	{
		p("Enter Domain  %d\t:\t",(1)+m++);
		scanf("%d",&x[c]);
		p("Enter Range %d\t:\t",m);
		scanf("%d",&y[c]);
	}
	
	printf("\nVALID ! You entered R={ ");
	
	for(c=0;c<3;c++)
		p("(%d,%d)",x[c],y[c]);

	p(" }\n\n");
	


	p("INVERSE\n");
	p("R-1={");
	for(c=0;c<3;c++)
		p("(%d,%d)",x[c],y[c]);

	p("}\n\n");


	p("COMPLEMENT\n");
	p("Rc={");	
		
		if(x[0]!=x[1] && x[0]!=x[2])
			if(y[1]!=y[0])
				p("(%d,%d)",x[0],y[1]);

		if(x[0]!=x[1] && x[1]!=x[2])
			if(y[1]!=y[0] )
				p("(%d,%d)",x[1],y[0]);

		if(x[2]!=x[0] && x[2]!=x[1])
			if(y[1]!=y[0] && y[0]!=y[2])
				p("(%d,%d)",x[2],y[0]);

		if(x[0]!=x[1] && x[0]!=x[2])
			if(y[2]!=y[0] && y[2]!=y[1])
				p("(%d,%d)",x[0],y[2]);

		if(x[2]!=x[1] && x[0]!=x[2])
			if(y[1]!=y[0] && y[2]!=y[1])
				p("(%d,%d)",x[2],y[1]);

		if(x[2]!=x[1] && x[0]!=x[1])
			if(y[2]!=y[0] && y[2]!=y[1])
				p("(%d,%d)",x[1],y[2]);
		
		p("}\n");

	return 0;

}

