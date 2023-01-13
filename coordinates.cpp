#include<stdio.h>
int main()
{
int a,b;
printf("Enter the coordinates of the point to determine the quadrant");
scanf("%d %d", &a,&b);
switch(a,b)
{
    case (a>0 && b>0):
    printf("The point lies in first quadrant");
    break;
    case 2:
    printf("The point lies in second quadrant");
    break;
    case 3:
    printf("The point lies in third quadrant");
    break;
    case 4:
    printf("The point lies in fourth quadrant");
    break;
    case 5:
    printf("The point lies on the origin");
    break;
    case 6:
    printf("The point lies on the y axis");
    break;
    case 7:
    printf("The point lies on the x axis");
    break;
}
}
