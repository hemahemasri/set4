#include<stdio.h>
void main()
{
int a[20],i,n,tot,avg;
printf("\n enter the limit");
scanf("%d",&n);
printf("\n enter the numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
b=a[0];
for(i=0;i<n;i++);
{
tot=b+a[i];
avg=tot/a[i];
}
printf("\n the average is=%d",avg);
getch();
}
