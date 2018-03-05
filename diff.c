#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("\n enter the number ");
scanf("%d%d",&a,&b);
c=a-b;
if((a%2==0)&&(b%2==0))
{
printf("\n even");
}
else
{
printf("\n odd");
}
printf("\n the differenc=%d",c);
getch();
}
