#include<stdio.h>
void main()
{
int i,n;
clrscr();
printf("\n enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
i=n*2;
}
printf("\n the nearest greater multiple of 10 is=%d",i);
getch();
}
