#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int n,i,res,a[20],t=0;
char h[10];
clrscr();
printf("enter roman number:");
scanf("%s",h);
n=strlen(h);
for(i=0;i<n;i++)
{
if(h[i]=='I')
a[i]=1;
else if(h[i]=='V')
a[i]=5;
else if(h[i]=='X')
a[i]=10;
else if(h[i]=='L')
a[i]=50;
else if(h[i]=='C')
a[i]=100;
else if(h[i]=='D')
a[i]=500;
else
printf("\nINVALID");
}
for(i=0;i<n;i+=2)
{
if(a[i]<a[i+1])
	{
		res=a[i+1]-a[i];
	}
	else
	{
	res=a[i]+a[i+1];
	}
t=res+t;
}
printf("\n%d",t);
getch();
}
