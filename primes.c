#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,flag=0;
clrscr();
printf("\n enter the number");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=1;
break;
}
if(flag==0)
{
printf("\n prime number");
}
else
{
printf("\n not a prime");
}
getch();
}
