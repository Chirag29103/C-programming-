#include<stdio.h>
int main()
{
int a, b;
printf( "Enter any value to divide it by 64 ");
scanf("%d",&a);
b=(a>>6);
printf("%d",b);
return 0;
}
