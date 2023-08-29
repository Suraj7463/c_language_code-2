#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,c;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            c=0;
            if(j>=5-i && j<=5+i)
            {
                printf("%d",j+c);
                c=1;
            }
        }
        printf("\n");
    }
}