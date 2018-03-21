#include<stdio.h>
#include<conio.h>
void main()
{
int res=0,rem,n;
printf("\n enter the number");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
n=n/10;
res=res*10+rem;
}
printf("%d",res);
getch();
}
