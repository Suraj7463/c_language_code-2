#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("enter two no:\n");
    scanf("%d%d",&a,&b);
    printf("before swap the number is a=%d and b=%d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\n after swap value is a=%d and b=%d",a,b);
}