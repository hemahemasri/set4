#include<stdio.h>
#include<conio.h>
void main()
{
int l,r,i,j,c=0,flag=1;
clrscr();
printf("\n enter the l and r");
scanf("%d %d",&l,&r);
if(l==2)
{
c++;
}
for(i=0;i<=r;i++)
{
if(i%j==0)
{
flag=0;
break;
}
}
if(flag==1)
{
c=c+1;
}
printf("%d\n",c);
getch();
}
