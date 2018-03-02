#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,temp,m;
chr  srtr[10];
printf("\n enter the number ");
scanf("%s",str);
m=strlen(str);
for(i=o;i<m;i++)
{
if(str[i]=='0'||str[i]=='1')
{
temp=1;
}
else
{
temp=0;
}
}
if(temp==1)
{
printf("\n it is a binary number");
}
else
{
printf("\n it is not a binary number ");
}
getch();
}
