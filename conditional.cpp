#include<stdio.h>
int main()
{
float a,b,c;
printf("Enter the numbers obtained by the three students");
scanf("%f %f %f", &a, &b, &c);
a>b? a>c? printf("a is greatest"):0:
b>a? b>c? printf("b is greatest"):0:
c>a? c>b? printf("c is the greatest"): 0:;
return 0;
}
