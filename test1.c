#include <stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a,b");
	scanf("%d%d",&a,&b);
	printf("relation operators result is %d%d%d%d",a>b,a<b,a>=b,a<=b);
	printf("logical operators reslut is %d%d%d",a&&b,a||b,!(a==b));
	printf("increment operators result is %d%d%d%d",a++,++a,b++,++b);
	printf("decrement operators result is %d%d%d%d",a--,--a,b--,--b);
	printf("bitwise AND operator result is %d",a&b);
	printf("bitwise OR operator reslut is %d",a|b);
	printf("bitwise NOT opertor reslut is %d",a^b);
}
