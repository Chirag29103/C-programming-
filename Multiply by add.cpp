#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers to multiply them");
    scanf("%d %d",&a,&b);
    
    c=0;
    
    for(int i=1; i<=b; i++)
    {
        c=c+a;
    }
    printf("%d",&c);
    
    return 0;
}
