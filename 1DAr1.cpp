#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements to be in the array");
    scanf("%d",&n);
    
    int a[n];
    
    printf("Enter the entities");
    
    for(int i=0; i<n; i++)
    scanf("%d",&a[i]);
    
    for(int i=0; i<n; i++)
    printf("%d ",a[i]);
    
    return 0;
}
