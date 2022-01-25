#include<stdio.h>
int main()
{
	int a,b,c,max,min;
	printf("enter the values");
	scanf("%d%d%d",&a,&b,&c);
	max=a>b?a:b;
	max=max>c?max:c;
	printf("%d\n",max);
	min=a<b?a:b;
	min=min<c?min:c;
	printf("%d\n",min);
}
