#include <stdio.h>

int main(void)

{
	int rate=25;
	
	float km;
	float meter;
	float total;
	int bayad=1;
	int a;
	

	
	
	printf("enter kM\n");
	scanf("%f",&km);
	meter=km*1000;
	

	
	
	for(a=280;a<=meter;bayad++);
	{
		meter=meter-280;
		bayad=bayad+0;
	}
	total=bayad*2+rate-2;


	
	
	
	
	printf("the amount due is: %.2f",total);

	

}


