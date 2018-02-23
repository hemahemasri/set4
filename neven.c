#include<stdio.h>
void main()
{
int n;
clrscr();
printf("\n enter  the number ");
scanf("%d",n);
if(n/2==0)
{
printf("\n even no is=%d",n);
}
printf("\n nearest even number is %d",(n-1));
getch();
}
