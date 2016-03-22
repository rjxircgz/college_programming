#include <stdio.h>

int main()

{
	int remain=0;
	int reverse=0.0;
	int num;
	printf("enter numbers\n");
	scanf("%d",&num);
	

	while(num !=0)
	{
		remain = num % 10;
		reverse = reverse * 10 + remain;
		num /=10;
	}
	

	printf("here is the reverse: %d\n",reverse);

	return 0;
}
