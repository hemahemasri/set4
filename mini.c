#include<stio.h>
void main()
{
int i,n;
char str[50];
clrscr();
printf("\n enter the number ");
scanf("%d",&n);
printf("\n enter the string");
scanf("%s",str);
for(i=0;i<n;i++)
{
printf("\n %c",str[i]);
}
getch();
}
