#include<stdio.h>
int main()
{
	float a;
	printf("Enter a number to multiply it with 16");
	scanf("%g", &a);
	a*=16;                   //But the question says not to use multiplication operator
	printf("New value: %g", a);
	return 0;
}
