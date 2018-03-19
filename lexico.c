#include<stdio.h>
#include<conio.h>
void main()
{
char str[30],temp[50];int a,b,c;
clrscr();
printf("\n enter the string ");
scanf("%[^\n]s",str);
for(a=0;str[a]!='\0';a++)
{
for(b=b+1;str[b]!='\0';b++)
{
if(str[a]>str[a])
{
temp[c]=str[a];
str[a]=str[b];
str[b]=temp[c];
}
}
}
printf("\n%s",str);
getch();
}
