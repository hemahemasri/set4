#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("\n enter the numbers");
scanf("%d%d",&a,&b);
if((a%2==0)&&(b%2==0))
{
printf("\n even number");
}
else
{
printf("\n odd number");
}
getch();
}
