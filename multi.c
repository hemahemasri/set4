#include<stdio.h>
void main()
{
int  a,b,c; 
clrscr();
printf("enter the numbers");
scanf("%d%d",&a,&b);
c=a*b;
if(c%2==0)
{
printf("\n even number");
}
else
{
printf("\n odd number");
}
getch();
}
