#include<stdio.h>
#include<conio.h>
void main()
{
int d;
clrscr();
printf("\n enter the number ");
scanf("%d",&d);
if(d%13==0)
{
printf("\n it is a multiple of 13");
}
else
{
printf("\n it is not a multiple of 13");
}
getch();
}
