#include<stdio.h>
void main()
{
char s[20];
int a,ct;
clrscr();
printf("\n enter the string ");
scanf("%s",s);
for(i=0;s[i]!=0;i++)
{
if(s[a]=='a' || s[a]=='e' || s[a]=='i' || s[a]=='o' || s[a]=='u' || s[a]=='A' || s[a]=='E' || s[a]=='I' || s[a]=='O' || s[a]=='U')
{
ct=1;
}
else
{
ct=0;
}

if(ct==1)
{
printf("\n string contain vowel");
}
else
{
printf("\n string is not contain vowel");
}
getch();
}
