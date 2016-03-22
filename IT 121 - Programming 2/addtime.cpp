#include <stdio.h>

void addtime(int *hours, int *mins, int ETime)

{

	int temp;
	temp=(*mins+ETime);
	*hours=((temp/60)+*hours);
	temp=(temp%60);
	*mins=temp;

}

int main()
{
	int hr, mn, et;

	printf("enter hour:");
	scanf("%d",&hr);
	printf("enter minutes:");
	scanf("%d",&mn);
	printf("enter elapsed time: ");
	scanf("%d",&et);

	addtime(&hr,&mn,et);

	printf("\n\nhours: %d \nminutes: %d\n\n",hr,mn);

	return 0;

}