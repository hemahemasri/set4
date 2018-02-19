#include<stdio.h>
void main()
{
int h;
printf("\n enter the number:");
scanf("%d",&h);
if(h!=0)
{
h++;
printf("\n the next number is:%d",h);
}
else
{
printf("invalid number \n");
}
getch();
}
