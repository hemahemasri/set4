#include<stdio.h>
void main()
{
int greatest;
int a[10];
int i;
printf("enter the ten values\n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
greatest=a[0];
for(i=0;i<10;i++)
{
if(a[i]>greatest)
{
greatest= a[i];
}
}
printf("greatest of two numbers is %d",greatest);
getch();
}
