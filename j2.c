#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[40];
int l,i;
printf("\n enter the string");
scanf("%s",str);
l=strlen(str);
if(str[0]>91)
{
str[0]=str[0]-32;
}
for(i=0;i<l;i++)
{
if(str[i]==' ')
{
if(str[i+1]>91)
{
str[i+1]=str[i+1]-32;
}
}
}
printf("\n %s",str);
getch();
}
