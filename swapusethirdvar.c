#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,temp;
    printf("enter two no;\n");
    scanf("%d%d",&a,&b);
    printf("before swap the number is a=%d and b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swap the number is a=%d and b=%d",a,b);
}