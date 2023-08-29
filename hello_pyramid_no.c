#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==i||j==1||i==n)
            {
                printf(" %d",j);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}