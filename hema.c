#include<stdio.h>
void main()
{
int n1,n2,n3,a,b,c,sum;
clrscr();
printf("\n enter the numbers");
scanf("%d%d%d",&n1,&n2,&n3);
a=n1%1000;
b=n2%100;
c=n3%10;
sum=a+b+c;
printf("\n the sum of digits is=%d",sum);
getch();
}
