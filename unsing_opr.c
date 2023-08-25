#include<stdio.h>
#include<conio.h>
void main()
{
    unsigned int res;
    res=(64>>(2+1-1))&(~(1<<2));
    printf("result is %u",res);
}