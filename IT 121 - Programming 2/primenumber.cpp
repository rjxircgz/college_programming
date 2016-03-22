#include <stdio.h>
#define p printf
#define s scanf



int main()

{	
	int num,i,meow=0;

	
	

	
	
	
	p("prime numbers:\n");

	for(num=2;num<=100;num++)
	{
		meow=0;
		for(i=2;i<num;i++)
			if(num % i== 0)
			{
				meow=1;
				break;
			}

		if(meow==0)
				p("%d ",num);

	
		
	}
	p("\n");

	
		

}