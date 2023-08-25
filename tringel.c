#include<stdio.h>
void main()
{
    int l=0,m=0,n=0,sum=0;
    printf("enter two angle\n");
    scanf("%d%d",&l,&m);
    n=180-(l+m);

    printf("third angle of tringle is :%d",n);
}