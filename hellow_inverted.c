#include<stdio.h>
#include<conio.h>
void main()
{
    int n=6;
    int i,j;
    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            if(j==1||i==n||i==j)
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