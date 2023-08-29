#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n=6,k;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=8-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=n;j++)
        {
            if(i==j || i==n || j==1)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}