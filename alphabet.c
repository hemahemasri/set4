#include<stdio.h>
#include<conio.h>
void main()
{
char str[20];
int a,b;
clrscr();
printf("\n enter the string");
scanf("%s",str);
b=strlen(str);
for(a=0;a<b;a++)
{
if(a%2==0)
{
printf("%c",str[a]);
}
}
printf(" ");
for(a=0;a<b;a++)
{
if(a%2==1)
{
printf("\n%c",str[a]);
}

}
getch();
}





















