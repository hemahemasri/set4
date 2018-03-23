#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char b[100];
int n,i;
clrscr();
printf("\n enter the string:");
gets(b);
n=strlen(b);
for(i=0;i<n;i++)
{
if(b[i]==' ')
{
b[i+1]-=32;	
}
}
b[0]-=32;
printf("%s",b);
getch();	
}
