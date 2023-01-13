#include<stdio.h>
int main()
{
    int a=0,c,s=1,n,d;
    d=s+a;
    printf("Enter the number of terms to print of the fibonacci series");
    scanf("%d", &n);
    printf("0 1 ");
    for(c=3; c<=n; c++)
    {
        printf("%d ",d);
        a=s;
        s=d;
        d=a+s;
    }
    return 0;
}
