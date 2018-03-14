#include<stdio.h>
void main()
{
int n,n1,n2;
clrscr();
printf("\n enter the number");
scanf("%d%d",&n1,&n2);
n=n1*n2;
if(n%n1==n1)
{
printf("\n yes  it is perfect square");
}
else
{
printf("\n no  it is not a perfect square");
}
getch();
}
