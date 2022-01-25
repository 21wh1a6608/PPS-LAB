#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,SI,CI;
	scanf("%f%f%f",&p,&r,&t);
	SI=(p*r*t)/100;
	printf("simple intrest is %f\n",SI);
	CI=p*pow(1+r/100,t)-p;
	printf("compound intrest is %f\n",CI);
}
