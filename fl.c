#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,f=1;
clrscr();
printf("\n enter the number ");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
f=f*i;
}
printf("\n the factorial is=%d",f);
getch();
}
