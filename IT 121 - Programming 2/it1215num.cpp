#include <stdio.h>
#define p printf

void swapnum(float &i, float &j, float &k, float &l, float &m, float *add) 
{
  float temp = i;
  i = j;
  j = k;
  k = l;
  l = m;
  m = temp;

  *add = i+j+k+l+m;
  

}

int main(void) 
{
  float a,b,c,d,e,addition;


  p("enter numbers: ");
  scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

  swapnum(a,b,c,d,e, &addition);

  p("A is %.2f\nB is %.2f \nC is %.2f \nD is %.2f \nE is %.2f\n", a, b, c, d, e);
  p("\nthe total is %.2f",addition);

  return 0;
}
