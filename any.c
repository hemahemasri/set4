#include<stdio.h>
#include<conio.h>
void main()
{
char str[20],str1[20];
int i,j,n1,n2,c=0;
printf("\n enter the string");
scanf("%s%s",str,str1);
if(n1==n2)
{
for(i=0;i<n1;i++)
{
if(str[i]==str1[i])
{

c=c+0;
}
else
{
c=c+1;
}
}
}

if(c==1)
{
printf("\n yes");
}
else
{
printf("\n no");
}
}
getch();
}
