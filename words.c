#include<stdio.h>
void main()
{
char str[50];
int count=0,i;
printf("\n enter the string");
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
count++;
}
printf("\n number of words:%d",count+1);
}
