#include<stdio.h>
#include<string.h>
#include <time.h>
#include <stdlib.h>
int main()
{
 char str[40];
 int i;
 printf("Enter any string : ");
 gets(str);

  for(i=0; str[i]!=NULL; i++)
 {
    if(str[i]>='A' && str[i]<='Z')
    {
       str[i]=str[i]+32;
    }
 }





 for(i=0; str[i]!=NULL; i++)
 {

	 
   if(str[0]>='a' && str[0]<='z')
    str[0]=str[0]-32;


	 if(str[i] == ' ')
	 {
		 i=i+1;
		if(str[i]>='a' && str[i]<='z')
			str[i]=str[i]-32;
		


	 }
 }
 str[i]='\0';
 puts(str);







 printf("random leter %d\n",'a');

  return 0;
}

