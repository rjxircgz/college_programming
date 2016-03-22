#include <stdio.h>

main()

{
	typedef struct 
	{
		char name[10];
		int  age;
	}record;

	record emp[1];

	printf("enter name: ");
	gets(emp[0].name);

	printf("age: ");
	scanf("%d",&emp[0].age);



	printf("enter name: ");
	scanf("%s",&emp[1].name);

	printf("age: ");
	scanf("%d",&emp[1].age);


	printf("iyaha name 1: %s\n",emp[0].name);
	printf("iyaha name 2: %s\n",emp[1].name);
 












}