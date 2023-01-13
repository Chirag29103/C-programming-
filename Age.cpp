#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,t;
    printf("Enter the age of 15 persons");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o);
    
    t=0;
    for( int i=97; i<=112; i++)
    {
        if(i>=0 && i<=5)
        t++;
    }
    
    printf("%d",t);
    
    return 0;
}
