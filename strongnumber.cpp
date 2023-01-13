#include<stdio.h>
int main()
{
int n,sum,f,x,r;
printf("Enter any number:");
scanf("%d",&n);
    sum=0;
    x=n;
    while(x>0)
    {
        r=x%10;
        f=1;
        while (r>=1)
        {
            f=f*r;
            r--;
        }
        x=x/10;
        sum=sum+f;
    }
if(sum==n)
printf("the no. is strong");
else
printf("It is not strong");
return 0;
}
