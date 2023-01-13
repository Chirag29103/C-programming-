#include<stdio.h>
int main()
{
float a,b,c;
printf("Enter the marks obtained by the the three students");
scanf("%f %f %f", &a, &b, &c);
if (a>b && a>c)
{
printf ("%g is the greatest",a);
}
else if (b>a && b>c)
printf ("%g is the greatest",b);
else
printf ("%g is the greatest",c);
return 0;
}
