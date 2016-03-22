
#include<stdio.h>

int leapyear(int);// protyping function

int main()
{
    int x;
    printf("Enter a number=");
    scanf("%d",&x);
   
    if(leapyear(x))
    {
        printf("The %d year is Leap year",x);
    }
    else
    {
        printf("The %d year is not Leap year",x);
       
    }
   
}

int leapyear(int year)
{
    int iscentury=0;// to test if year is century or not
   
    if(year%100==0)
    {
        iscentury=1;//yes its a century
    }
   
    if(iscentury)
    {
       
        if(year%400==0)//century must be divided by 400
        {
           
            //yes?
            return(1);// you have leap year... return 1
        }
        else
        {
           
            return(0);// no leap year return 0
        }
    }
    else
    {
        if(year%4==0)// normal year must be divided by 4
        {
            return(1);// you have leap year return 1;   
        }
        else
        {
            return(0);// you don't have leap year return 0
        }   
       
    }
   
}