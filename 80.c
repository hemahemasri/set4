#include<stdio.h>
#include<conio.h>
void main()
{
int  a,b;
clrscr();
printf("\n enter the  number "):
scanf("%d",&a);
while(a!=0)
{
b=a%10;
if(b%2==0)
{
b=a/10;
if(b==0)
{
printf("it have a odd degree");
}
}
else
{
printf("\n it did not have a odd ");
}
}
getch();
}
