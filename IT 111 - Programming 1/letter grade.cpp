#include <stdio.h>

void main()

{
	int grade;

	printf("enter grade\n");
	scanf("%d",&grade);

	if (grade<=100 || grade>=90)
	{
		printf("letter grade is A\n");
	}

	if (grade<=89 || grade>=80)
	{
		printf("letter grade is B\n");
	}

	if	(grade<80)
	{	
		printf("the student bogo\n");
	}

}