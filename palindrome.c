#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[10],tmp[20],t;
printf("\n enter the string");
scanf("%s",str);
strcpy(tmp,str);
strrev(tmp);
t=strcmp(str,tmp);
if(t==0)
{
printf("\n palindrome");
}
else
{
printf("\n not a palindrome");
}
getch();
}
