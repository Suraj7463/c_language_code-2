#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char name[10];
    char newname[6];
    printf("enter name:\n");
    gets(name);
    printf("%s\n",name);
    int l=strlen(name);
    printf("size is %d\n",l);
    for(int i=5;i>=0;i--)
    {
        printf("%c",name[i]);
        
    }


}