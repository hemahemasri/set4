#include <stdio.h>
void main()
{
int num,c=0;
clrscr();
printf("enter the number");
scanf("%d",&num);
while(num!=0)
{
num=num/10;
count++;
}
printf("\n%d",count);
getch();
}
