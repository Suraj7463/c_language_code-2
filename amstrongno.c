#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int i,j,n,rem,c=0,sum=0,p=0;
    printf("enter no:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j=i;
        
        while(j!=0)
        {
            j=j/10;
            c++;
        }
        
        j=i;

        while(j!=0)
        {
        
            rem=j%10;
            j=j/10;
        
            p=(int)(pow(rem,c)+1e-9);
            //printf("%d",p);
            sum=sum+p;  
        }
        if(sum==i)
        {
             printf("%d\n",i);   
        }
    
        c=0;
        sum=0;
        p=0;
        
        
        
    
}
}