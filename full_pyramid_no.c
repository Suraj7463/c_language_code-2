#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n=5,k,m;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=1;j--)
        {
            if(j==i)
            {
                m=i*2-1;
                for(k=1;k<=m;k++)
                {
                    
                        printf(" %d",k);
                    
                }

            }
            else{
                printf("  ");
            }
        

        }
        printf("\n");
    }

}