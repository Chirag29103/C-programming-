#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,s,n,t,p,q;
    printf("Enter the range to get armstrong number between it\n");
    printf("Start point\n");
    scanf("%d",&a);
    printf("End point\n");
    scanf("%d",&b);
    
    for (int i=a; i<=b; i++)
    {
        p=i;
        q=i;
        n=0;
        s=0;
        while(i>0)
        {
           i= i/10;
           n++;
        }
        while(t>0)
        {
            t=p%10;
            c= pow(t,n);
            s=s+c;
            p=p/10;
        }
        if(q==s)
        printf("%d",q);
    }
    return 0;
}
