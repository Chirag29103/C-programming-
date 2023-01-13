#include<stdio.h>
int main()
{
    int a=0,b=1;
    
    for (int i=1; i<=5; i++)
    {
        b=1;
        for (int j=1; j<=i; j++)
        {
            if (i%2==0)
            {
            if (a>1)
            a=0;
            printf("%d",a);
            a++;
            }
            else
            {
            printf("%d",b);
            b--;
            if (b<0)
            b=1;
            }
        }
        printf("\n");
    }
    return 0;
}
