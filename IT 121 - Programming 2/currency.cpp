#include <stdio.h>

float dollar(float num)
{
	float php;
	php = num*44.5;

	return php;
}

float yen(float num)
{
	float php;
	php = num*0.43;

	return php;
}

float pound(float num)
{
	float php;
	php = num*25.2;

	return php;
}

int main()
{
	float d,y,p;
	float input;
	printf("enter a value :");
	scanf("%f",&input);

	d=dollar(input);
	y=yen(input);
	p=pound(input);

	printf("%.2f US dollar \t= %.2f php\n",input,d);
	printf("%.2f yen \t= %.2f php\n",input,y);
	printf("%.2f pound \t= %.2f php\n",input,p);

}



