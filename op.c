#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
int a1,a2;
int b2,b1;
int c1,c2;
printf("\n enter the number");
scanf("%d%d%d%d%d%d",&a1,&a2,&b1,&b2,&c1,&c2);
a=a1/a2;
b=b1%b2;
c=c1%c2;
printf("%d",a);
printf("%d",b);
printf("%d",c);
getch();
}
