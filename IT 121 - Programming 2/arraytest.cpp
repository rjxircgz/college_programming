#include <stdio.h>

main()
{
	 int num,i, j;
        printf("prime numbers:");

	for(num=2;num<=20;num++)
	{
		j=0;
		for(i=2;i<num;i++)
			if(num % i== 0)
			{
				j=1;
				 printf("%d is not prime\n",num);
			}

		if(j==0)
                    printf("%d is prime\n",num);

	
		
	}
			

}