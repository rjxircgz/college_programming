#include <stdio.h>
#include<stdlib.h>
#include <math.h>

//reindel john a. raneses
 
 

void scan_data(char , float );
float do_next_op(char , float , float );
 
 
int main()
{
	printf("Press enter to use this calculator");
	scan_data('w',1);
	  
	return 0;
}
 
 
 
void scan_data(char sign, float num)
{
     
	char op, oo;
	float result;
	result = 0;
     
	do
	{
             
		scanf("%c", &oo);
		scanf("%c", &op);
             
		if(op=='q'||op=='Q')
		{
			printf("Final result is %1.1f\n", result);
			exit(0);
		}
             
       
         
		else
		{
          
			scanf("%f", &num);
			result = do_next_op(op, num, result);
		}
         
 
		}while(op!='q'||op!='Q');
     
}
 
float do_next_op(char oper, float num, float total)
{
     
     
	switch(oper)
    {
		case('^'):
         
		total =  pow(total,num);
		printf("result so far is %1.1f\n", total);
             
		return total;
		break;
 
     
		case('*'):
         
		total = total * num;
		printf("result so far is %1.1f\n",total);
             
		return total;
		break;
         
		case('/'):
         
		if(num>0)
		{
			total=total/num;
			printf("result so far is %1.1f\n", total);
             
			return total;
			break;
			}

			else
			{
				printf("undefined\n");
				printf("result so far is %1.1f\n", total);
				return total;
				break;
			}
			
			

     
			case('+'):
         
			total=total+num;
			printf("result so far is %1.1f\n", total);
             
			return total;
			break;
                 
         
			case('-'):
     
			total=total-num;
			printf("result so far is %1.1f\n", total);
             
			return total;
			break;

			case('q'):
			printf("final result is %1.1f\n", total);
			exit(0);


         
     
			default:
			break;
         
    }
}
     
