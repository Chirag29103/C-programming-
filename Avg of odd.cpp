#include<stdio.h>
int main()
{
    int a,b,c,t;
    float s;
    printf("Enter the range to get average of odd numbers between them \n");
    printf("Enter the start point");
    scanf("%d",&a);
    printf("Enter the end point");
    scanf("%d",&b);
    
    s=0;
    t=0;
    for (c=a; c<b; c++)
    {
        if (c%2!=0)
        {
            s=s+c;
            t++;
        }
    }
    
    s=s/t;
    printf("%g",s);
    return 0;
}
