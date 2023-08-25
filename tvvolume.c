#include<stdio.h>
#include<conio.h>
void main()
{
    int xx,yy;
    printf("enter initial and final volume of tv:\n");
    scanf("%d%d",&xx,&yy);
    (xx>yy)?printf(" volume decrease %d",xx-yy):printf("volume increase %d",yy-xx);
}