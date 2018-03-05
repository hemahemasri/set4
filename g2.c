#include<stdio.h>
#include<conio.h>
void main()
{
int h;
clrscr();
printf("\n enter the number");
scanf("%d",&h);
while(h%10!=0)
{
h++;
}
printf("\n the nearest greatest multiple of 10 is:%d",h);
getch();
}
