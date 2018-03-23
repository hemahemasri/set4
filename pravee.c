#include<stdio.h>
#include<conio.h>
void main()
{
int n,n1,i,r;
clrscr();
printf("\n enter the number");
scanf("%d",&n);
while(n!=1)
{
r=n%2;
n1=n%2;
printf("\n %d",n1);
n=r;
break;
}
getch();
}

