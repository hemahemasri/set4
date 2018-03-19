#include<stdio.h>
#include<conio.h>
void main()
{
char str[50];
int i,a;
printf("\n enter the alpha numeric ");
scanf("%d",str);
a=strlen(str);
for(i=0;i<a;i++)
{
if(str[i]>'0'&&str[i]<='9')
{
printf("%c",str[i]);
}
}
getch();
}
