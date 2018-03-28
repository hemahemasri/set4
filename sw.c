#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[20];
int i,temp,n;
clrscr();
printf("\n enter the string");
scanf("%s",str);
n=strlen(str);
if(n%2==0)
{
for(i=0;i<n;i+=2)
{
temp=str[i];
str[i]=str[i+1];
str[i+1]=temp;
}
printf("%s",str);
}
else
{
for(i=0;i<n;i+=2)
{
temp=str[i];
str[i]=str[i+1];
str[i+1]=temp;
}
printf("\n %s",str);
}
getch();
}
