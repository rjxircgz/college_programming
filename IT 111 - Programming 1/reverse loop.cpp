#include <stdio.h>
void main()
{
int remain = 0, reverse = 0;
int num;

printf("Enter a integer: ");
scanf("%d", &num);


do
{
remain = num % 10;
reverse = reverse * 10 + remain;
num /= 10;

}
while(num != 0);

printf("%d\n", reverse);



}