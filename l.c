#include<atdio.h>
#include<conio.h>
void main()
{
int c, a,b,m,n;
clrscr();
printf("\n enter the number ");
scanf("%d%d%d",&a,&b,&c);
n=a*b;
m=n%c;
printf("%d",m);
getch();
}
