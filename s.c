#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int a,t;
char b[10];
printf("\n enter the string");
scanf("%s",b);
a=strlen(b);
t=a/2;
b[t]="*";
printf("\n %S",b);
getch();
}
