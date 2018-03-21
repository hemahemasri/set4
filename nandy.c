#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,m=1;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
p=p*rem;
n=n/10;
}
printf("%d",p);
getch();
}
