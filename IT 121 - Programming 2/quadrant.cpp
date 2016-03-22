#include <stdio.h>

int main()

{
	int angle,i;
	char answer;
	

	do
	{
		printf("enter angle\n");
		scanf("%d",&angle);

		
		printf("that angle is in quadrant ");

		if(angle > 0 && angle < 90)
			printf("I\n"); 

		else if(angle > 90 && angle < 180)
			printf("II\n");

		else if(angle > 180 && angle < 270)
			printf("III\n");

		else if(angle > 270 && angle < 360)
			printf("IV\n");

	
	printf("continue? press Y\n");
	scanf("%s",&answer);
	}
	while(answer=='Y');
	
	

}

