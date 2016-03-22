#include <stdio.h>

void main()
{
	int average,largest,Grade;
	int num1,num2,num3;
	

	printf("Enter 1st Number ");
	scanf("%d",&num1);

	printf("Enter 2nd Number ");
	scanf("%d",&num2);

	printf("Enter 3rd Number ");
	scanf("%d",&num3);


	
	if (num1>num2) 
largest=num1;
else
largest = num2;
if (num3>largest)
largest = num3;
else
largest = largest;

	

	average=(num1+num2+num3)/3;


if (average > (largest - 10))
Grade = 'A';
else if (average >= (largest - 20))
Grade = 'B';
else if (average >= (largest - 30))
Grade = 'C';
else if (average >= (largest - 40))
Grade = 'D';
else
Grade = 'F';

printf("\nThe Largest is %d\n",largest);
printf("\nThe Average is %d\n",average);
printf("\The Grade is %c\n",Grade);
}