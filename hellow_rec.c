#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==1 && j<= 5 || i==2 && j==5 || i==3 && j<=5 || i==2 && j==1)
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