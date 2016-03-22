#include <stdio.h> 
int sum(int);

int main()  

	{  
		int sd, num;  
		printf("\nEnter any number:");  
		scanf("%d",&num);  
		sd =sum(num);  
		printf("\n Sum of digits = %d",sd); 
		
		return 0;
	}        
    
int sum(int n)  
    
	{   
		if(n<10)  
			return(n); 
		
		else  
			return(n %10 + sum(n/10)) ;  
    }  