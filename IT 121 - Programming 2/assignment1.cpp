#include <stdio.h>

//reindel john a. rañeses
float max(float q,float w,float e,float r,float t)
{
	float maximum;

	if(q>w && q>e && q>r && q>t)
		maximum=q;
	else if(w>q && w>e && w>r && w>t)
		maximum=w;
	else if(e>q && e>w && e>r && e>t)
		maximum=e;
	else if(r>q && r>w && r>e && r>t)
		maximum=r;
	else
		maximum=t;

	return(maximum);
}

float min(float a,float s,float d,float f,float g)
{
	float minimum;

	if(a<s && a<d && a<f && a<g)
		minimum=a;
	else if(s<a && s<d && s<f && s<g)
		minimum=s;
	else if(d<a && d<s && d<f && d<g)
		minimum=d;
	else if(f<a && f<s && f<d && f<g)
		minimum=f;
	else
		minimum=g;

	return(minimum);
}

int main()
{
	float n1,n2,n3,n4,n5,mx,mn;
	printf("enter 5 numbers\n");
	printf("enter 1st number: ");
	scanf("%f",&n1);
	printf("enter 2nd number: ");
	scanf("%f",&n2);
	printf("enter 3rd number: ");
	scanf("%f",&n3);
	printf("enter 4th number: ");
	scanf("%f",&n4);
	printf("enter 5th number: ");
	scanf("%f",&n5);
	

	printf("the maximum number is %.2f\n",mx = max (n1,n2,n3,n4,n5));
	printf("the minimum number is %.2f\n",mn = min (n1,n2,n3,n4,n5));


	return 0;


}





