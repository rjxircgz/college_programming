#include <stdio.h>
#define p printf

int main()
{

	int x;
	char z;

	p("\nthis program will  determine the months with Friday the 13th of a given year\n");

	do
	{
		p("\nPlease enter any year: ");
		scanf("%d",&x);

		int y= ( x + ((x-1)/4) - ((x-1)/100) + ((x-1)/400)  )%7;

		p("\n\n");
		p("The month(s) with Friday the 13th of year %d : ",x); 

	
		if(x%4!=0)	//if not leapyear
		{
	
			if(y==0)
				p("January and October\n");

			if(y==1)
				p("April and July\n");

			if(y==2)
				p("Septemeber and December\n");

			if(y==3)
				p("June\n");

			if(y==4)
				p("February, March and November\n");

			if(y==5)
				p("August\n");

			if(y==6)
				p("May\n");
	
		}
	

		else
		{

			if(y==0)
				p("January, April and July\n");

			if(y==1)
				p("Septemeber and December\n");

			if(y==2)
				p("June\n");

			if(y==3)
				p("March, and November\n");

			if(y==4)
				p("February and August\n");

			if(y==5)
				p("May");

			if(y==6)
				p("October\n");

		}

		p("\nTry again? press Y ");
		scanf("%s",&z);

	}while(z=='y' || z=='Y' );

	return 0;

}

