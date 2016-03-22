#include<stdio.h>

 int function(int &x)
 {
 char ret;
 char ran[9],dom[9],uni[3], uni2[3];
 char open,close,comma,separ,brak;
 int temp[9];

 uni[1]='a';
 uni2[1]='a';
 uni[2]='b';
 uni[3]='c';
 uni2[2]='b';
 uni2[3]='c';

 for(int init=0;init<=8;init++)
 temp[init]=1;

 printf("\n\t\tU= { %c,%c,%c }\n\n", uni[1],uni[2],uni[3]);
 printf("\n\tWhen you are inputting, do not separate with space.\n\tIn R, if first time input like {(a,a),\n\t\totherwise, input like (a,a).\n\tTo end the relations input }.");

 if(x==2)
 printf("\n\n\tR= ");
 else
 printf("\n\n\tR= {");

 for(init=1;open!='}';init++)
 { scanf("%c", &brak);
 scanf("%c", &open);
 scanf("%c", &dom[init]);
 scanf("%c", &comma);
 scanf("%c", &ran[init]);
 scanf("%c", &close);
 scanf("%c", &separ);
 if(separ=='}')
 break;

 }

 int final=init;


 for(init=1;init<=final;init++)
 {
 if(dom[init]==uni[1]||dom[init]==uni[2]||dom[init]==uni[3])
 ;
 else
 { return 1;
 x++;
 }
 if(ran[init]==uni[1]||ran[init]==uni[2]||ran[init]==uni[3])
 ;
 else
 { return 0;
 x++;
 }
 }

 printf("\n\t\t\t\tDomain\tRang?e\n");
 for(init=1;init<=final;init++)
 {
 printf("\tRelation %d\t\t%c\t%c\n",init,dom[init] ,ran[init]);
 }

 printf("\n\nR-1\n\tR-1={");

 for(init=1;init<=final;init++)
 {
 printf("(%c,%c)", ran[init],dom[init]);

 if(init==final-1)
 printf(",");

 if (init==final)
 printf("}\n\n");
 }

 printf("\n\nRc\n\tRc={");


 int init3=0;
 for(init=1;init<=3;init++)
 { 
 for(int init1=1;init1<=3;init1++)
 {

 for(int init2=1;init2<=final;init2++)
 { 
 if( (dom[init2]==uni[init]) && (ran[init2]==uni2[init1]))
 { 
 init2=final;
 temp[init3]*=0;

 }
 else
 { 
 temp[init3]*=1;

 }

 }
 init3++; 
 }

 }



 init3=0;

 for(init=1;init<=3;init++)
 {

 for(int init1=1;init1<=3;init1++)
 { 
 if(temp[init3]==0)
 ;
 else
 printf("(%c,%c)",uni[init],uni2[init1]);
 init3++;

 if((init==3&&init1==3)||temp[init3]==0)
 ;
 else
 printf(",");


 }
 }

 printf("}\n\n");


 return x++;

 }

 int main()
 { int x=2;
 char repeat='y';
 while(repeat=='y')
 {
 int exact=function(x);


 if(exact>=2)
 { printf("Do you want to run the program again?Y/y or N/n: ");
 scanf("%s", &repeat);
 }
 else if (exact==1)
 {
 printf("\nThe domain you entered is invalid.\nDo you want to run the program again?Y/y or N/n: ");
 scanf("%s", &repeat);
 }
 else if (exact==0)
 {
 printf("\nThe range you entered is invalid.\nDo you want to run the program again?Y/y or N/n: ");
 scanf("%s", &repeat);
 }
 }

 return 0;

 }