#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n=5;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                printf("%d",j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}