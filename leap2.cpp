#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the range to get number of leap years between them \n");
    printf("Enter the start point");
    scanf("%d",&a);
    printf("Enter the end point");
    scanf("%d",&b);
    
    for (c=a+1; c<b; c++)
    {
        if (c%100!=0 && c%4==0)
        printf("%d  ",c);
        else if( c%100==0 && c%400==0)
        printf("%d  ",c);
    }
    
    return 0;
}
