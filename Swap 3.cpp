#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter any two values a,b to swap their values:");
	scanf("%d %d", &a,&b);
	a=a^b, b=a^b, a=a^b;
	printf("Values after interchanging a:%d \t b:%d", a,b);
	return 0;
}
