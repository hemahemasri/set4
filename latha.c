#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,n,i,a[20];
printf("\n enter the number ");
scanf("%d",&n);
printf("\n enter the numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);  
}
for(i=0;i<n;i++)
{
sum= sum+a[i];
}
printf("%d",sum);
getch();
}
