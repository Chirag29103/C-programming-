#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int a[n],b[n],c[n];
    
    for(int i=0; i<n; i++)
    scanf("%d",&c[i]);
        
    for(int i=0; i<n; i++)    
    {
    if (c[i]%2==0)
    a[i]=c[i];
    
    printf("%d",a[i]);
    }
    return 0;
}
