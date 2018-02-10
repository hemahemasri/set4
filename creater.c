#include<stdio.h9p[
#define max 100
void main()
{
char str[max];
char*s=str;
int alpha,digit,special;
alpha=special=digit=0;
printf("enter the string \n");
gets(str);
while(*s)
{
if((*s>='a'&&*s<='z')||(*s>='A'&&*s<='Z'))
{
alpha++;
else if(*s>='0'&&*s<='9')
digit++;
else
special++;
s++;
}
}
printf("special character=%d",special);
getch();
}
