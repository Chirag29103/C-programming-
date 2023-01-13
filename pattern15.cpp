#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("\t \tOUTPUT\n\n");
    
    for ( int i=1; i<=n; i++)
    {
        for (int j=1; j<=2*n-i; j++)
        
        if ( j>=i && j<=2*n-i)
        printf("8");
        else 
        printf(" ");
        printf("\n");
    }
    return 0;
}
