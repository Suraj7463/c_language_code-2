#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n=5;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
            {
                printf(" *");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}