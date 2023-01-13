#include<stdio.h>
int main()
{
    for ( int i=5; i>=1; i--)
    {
        for (int j=1; j<=5; j++)
        if (j==i)
        printf("*");
        else if ( i==1 && j>i)
        printf("*");
        else
        printf(" ");
        for ( int j=2; j<=5; j++)
        if ( j+i==6)
        printf("*");
        else if ( i==1 && j>i)
        printf("*");
        else
        printf(" ");
        printf("\n");
    }
    return 0;
}
