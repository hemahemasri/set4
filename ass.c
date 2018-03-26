#include<stdio.h>
#include<conio.h>
void main()
{
int n,temp,reverse=0,remainder;
printf("\n enter the number");
scanf("%d",&n);
temp=n;
while(n!=0)
{
remainder=n%10;
reverse=reverse*10+remainder;
n/=10;
}
 printf("\n  reverse is =%d",reverse );
 getch();
 }
 
