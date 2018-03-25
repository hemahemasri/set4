#include<stdio.h>
void main()
{
int i,n,sum;
clrscr();
printf("Enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
sum=sum+i;
}
printf("The sum of natural number is..:%d",sum);
getch();
}
