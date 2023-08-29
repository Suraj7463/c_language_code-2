#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,fact=1,sum=0,k,rem,flag=0;
    printf("enter number :\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j=i;
        while(j!=0)
        {
            rem=j%10;
            
            k=1;
            fact=1;
            while(k<=rem)
            {
                fact=fact*k;
                k++;
            
            }
            
            sum=sum+fact;
            
            j=j/10;
        }
        if(sum==i)
            {
                printf("%d\n",i);
            }
       
        sum=0;
        flag=0;
        
        
    }
}