#include<stdio.h>
int main()
{
	float a,b;
	printf("Enter two numbers a,b to swap their values:");
	scanf("%g %g", &a, &b);
	a=a+b, b=a-b, a=a-b;
	printf("Values after interchanging a:%g \t b:%g", a,b);
	return 0;
}
