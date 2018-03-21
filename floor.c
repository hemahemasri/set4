#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,res;
int s,n,f;
printf("\n enter the numbers");
scanf("%d %f%f",&a,&b,&n);
res=((a*b*n)/100);
s=floor(res);
printf("%d",s);
getch();
}
