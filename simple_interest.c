#include<stdio.h>
int main()
{
    int p,t,r,sl;
    printf("enter value of princepele rate of interest and time period respectively:\n");
    scanf("%d%d%d",&p,&t,&r);
    sl=(p*t*r)/100;


    printf("simple interest is:%d",sl);
}