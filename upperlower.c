#include<stdio.h>
#include<conio.h>
void main()
{
    char c;
    printf("enter charecter:");
    scanf("%c",&c);
    (c>='a'&& c<='z')?printf("%c is lower case",c):(c>='A' && c<='Z')?printf("%c is upper case",c):printf("invalid input");
}