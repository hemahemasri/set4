#include<stdio.h>
void main()
{
int a,b,c,i,terms;
printf("enter the number:\n");
scanf("%d",&terms);
a=0;b=1;c=0;
printf("fibonacci terms :\n");
for(i=1;i<=terms;i++)
{
a=b;
b=c;
c=0;
}
return 0;
}
