#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("enter charecter :\n");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    {
        int up= ch+32;
        printf("charecter in lower case is:%c",up);
    }
    else
    {
        int lo=ch-32;
        printf("charecter in lower case is :%c",lo);
    }

}