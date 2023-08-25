#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("enter two no:");
    scanf("%d%d",&a,&b);
    printf("before swap no is a=%d and b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap no is a=%d and b=%d",a,b);
}