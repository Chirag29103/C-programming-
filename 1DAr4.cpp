#include<stdio.h>
int main()
{
    int n,s=0,t=0,c=0;
    scanf("%d",&n);
    
    int a[n];
    
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0)
        s++;
        else if(a[i]<0)
        t++;
        else
        c++;
    }
    
    printf("Number of\nPositive entities:%d \nNegative entities:%d \nZeroes:%d",s,t,c);
    return 0;
}
