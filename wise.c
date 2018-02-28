#include<stdio.h>
void main()
{
int a,b;
clrscr();
printf("\n enter the value of a,b");
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("\n the values before swapping=%d %d",a,b);
printf("\n the values after swapping=%d %d,b,a);
getch();
}

