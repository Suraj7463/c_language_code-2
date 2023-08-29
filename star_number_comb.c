#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,l,m,p;
    for(i=1;i<=5;i++)
    {
        m=1;
        for(j=1;j<=9-i;j++)
        {
            printf("*");
        }
        l=i*2-1;
        for(k=1;k<=l;k++)
        {
            if(m)
            {
                printf("%d",i);
                m=0;
            }
            else
            {
                printf("*");
                m=1;
            }

        }
        for(p=1;p<=9-i;p++)
        {
            printf("*");
        }
        printf("\n");
    }
}