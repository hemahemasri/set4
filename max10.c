#include<stdio.h>
void main()
{
int n[10],i,gratest;
printf("\n enter the number limits");
for(i=0;i<=10;i++)
{
scanf("%d",n[i]);
}
greatest=n[0];
for(i=0;i<=10;i++)
{
if(n[i]>greatest)
{
greatest=n[i];
}
}
printf("\n gratest of 10 number is%d",greatest);
getch();
}
