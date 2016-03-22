#include <stdio.h>

int main()

{

	int var_num;
	char var_name;
	int negation;
	int connective;
	char truth_value1,truth_value2,answer;

	do
	{
	printf("press 1 if only one variable  \nor \npress 2 if two variables: ");
	printf("\npress 3 to display a truth table: ");
	scanf("%d",&var_num);
	
	if(var_num==1)
	{
		printf("enter variable name: ");
		scanf("%s",&var_name);
		printf("for negation press 0\n");
		printf("if not, press any letter\n");
		scanf("%d",&negation);
		switch(negation)
		{
			case 0:printf("~%s is FALSE\n",&var_name);
			break;
			
			default: printf("%s is TRUE\n",&var_name);
			break;
		}	
		
		
	}

	else if(var_num==3)
	{
	
		printf("choose connective: \n");
		printf("\n1: v or\n2: ^ and\n3: -> implication\n4: <-> Equivalence\n5: (+) exclusive or\n");
		scanf("%d",&connective);

		
		
			switch(connective)
			{
			case 1: printf("\nHere is the truth table\np   q	 pvq \n");
					printf("-------------\n");
					printf("T   T	  T\n");
					printf("T   F	  T\n");
					printf("F   T	  T\n");
					printf("F   F	  F\n");
			break;

			case 2: printf("\nHere is the truth table\np   q	 p^q \n");
					printf("-------------\n");
					printf("T   T	  T\n");
					printf("T   F	  F\n");
					printf("F   T	  F\n");
					printf("F   F	  F\n");
			break;

			case 3: printf("\nHere is the truth table\np   q	 p->q \n");
					printf("-------------\n");
					printf("T   T	  T\n");
					printf("T   F	  F\n");
					printf("F   T	  T\n");
					printf("F   F	  T\n");
			break;

			case 4: printf("\nHere is the truth table\np   q	 p<->q \n");
					printf("-------------\n");
					printf("T   T	  T\n");
					printf("T   F	  F\n");
					printf("F   T	  F\n");
					printf("F   F	  T\n");
			break;

			case 5: printf("\nHere is the truth table\np   q	 p(+)q \n");
					printf("-------------\n");
					printf("T   T	  F\n");
					printf("T   F	  T\n");
					printf("F   T	  T\n");
					printf("F   F	  F\n");
			break;
			}
	}

			else if(var_num==2)
			{
				printf("this is case sensitive\nplease use CAPITAL LETTERS\n");
				printf("\nenter Truth value 1: T/F: ");
				scanf("%s",&truth_value1);
				printf("choose connective: ");
				printf("\n1: v or\n2: ^ and\n3: -> implication\n4: <-> Equivalence\n5: (+) exclusive or\n\n");
				scanf("%d",&connective);
				printf("enter Truth value 2: T/F: ");
				scanf("%s",&truth_value2);

				if((truth_value1=='T' || truth_value2=='T') && connective==1)
					printf("%sv%s is True\n",&truth_value1,&truth_value2);
				

				else if((truth_value1=='T' && truth_value2=='T') && connective==2) printf("%s^%s is True\n",&truth_value1,&truth_value2);
					

				else if(((truth_value1=='T' && truth_value2=='T') || (truth_value1=='F' && truth_value2=='T')) && connective==3)
					printf("%s->%s is True\n",&truth_value1,&truth_value2);

				else if((truth_value1=='F' && truth_value2=='F') && connective==3)
					printf("%s->%s is True\n",&truth_value1,&truth_value2);

				else if((truth_value1==truth_value2) && connective==4)
					printf("%s<->%s is True\n",&truth_value1,&truth_value2);
				
				else if((truth_value1 != truth_value2) && connective==5)
					printf("%s(+)%s is TRUE\n",&truth_value1,&truth_value2);

				else 
					printf("%s %s is False\n",&truth_value1,&truth_value2);

			}
			printf("try again? press Y\n");
			scanf("%s",&answer);

			}while(answer=='Y' || answer=='y');

	return 0;


}


