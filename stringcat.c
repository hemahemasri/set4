#include <stdio.h>

void main()
{
char str[100];
int i,length;
scanf("%s",&str);
length=strlen(str);
for(i=length;i>=0;i--)
{
printf("%c",str[i]);
}
printf("\n");
getch();
}
