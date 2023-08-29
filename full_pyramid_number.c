#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,n=5,m;

    for(i=1;i<=n;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf(" ");
        }
        
        for(k=1;k<=i;k++)
        {
            printf("%d",k);
        
        }
        for(m=i-1;m>=1;m--)
        {
            printf("%d",m);
        }
        printf("\n");
    }
}