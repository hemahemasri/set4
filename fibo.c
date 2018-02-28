#include<stdio.h>
void main()
{
 int a=0,b=1,nt,n;
 printf("\n enter the limit:");
 scanf("%d",&n);
 printf("\n fibo series %d %d ",a,b);
 nt=a+b;
 while(nt<=n)
 {
 printf("%d",nt);
 a=b;
 b=nt;
 nt=a+b;
 }
 getch();
 }
