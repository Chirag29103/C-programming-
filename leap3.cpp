#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter the range to get number of leap years between them \n");
    scanf("%d",&a);
    scanf("%d",&b);
    
    for (i=a; i<=b; i++)
    {
        if ((i%100!=0 && i%4==0) || (i%100==0 && i%400==0))
        {
        printf("%d  ",i);
        }
    }
    
    return 0;
}
