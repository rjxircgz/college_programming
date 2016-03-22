#include <stdio.h>

int main()

{
	int num1,num2,num3;
	int average;
	int largest;
	int Grade;
	printf("Input 3 scores.Store it in variables num1,num2,and num3");
	scanf("%d %d %d",&num1,&num2,&num3);


if (num1>num2)
largest=num1;

else
largest = num2;

if (num3>largest)
largest = num3;

else
largest = largest;

	average =(num1 + num2 + num3)/3;
	if average > (largest - 10);
	Grade = 'A';

	else if (average >= (largest - 20))
	Grade = 'B';

	else if (average >= (largest - 30))
	Grade = 'C';

	else if (average > = (largest - 40))
	Grade = 'D';

	else
	Grade = 'F';

printf("the grade is %c",grade);
printf("the largest is %d",largest);

}
