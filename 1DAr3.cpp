#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    
    int a[n];
    
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    
    printf("Sum=%d \nAverage=%d",s,s/n);
    return 0;
}
