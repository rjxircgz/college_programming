#include <stdio.h>

void main()
{
int total=0;
int num;
int numcount=0;
int average;

printf("this can display average\n");
printf("press 999 to quit\n");

while(num!=999)
{
printf("enter number %d: ",numcount + 1);
scanf("%d",&num);

if (num != 999)
{
numcount++;
total=total+num;
}

}

average=(total/numcount);
printf("the average is %d\n",average);
}