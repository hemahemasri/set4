#include<stdio.h>
#include<conio.h>
void main()
{
char s[20];
clrscr();
printf("\n enter the string");
scanf("%s",s);
if(s[0]=='S'||s[0]=='s')
{
printf("\n yes");
}
else
{
printf("\n no");
}
getch();
}
