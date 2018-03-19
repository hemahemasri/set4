#include<stdio.h>
#include<conio.h>
void main()
{
int s,w,h,l,j,g,n;
printf("enter the values");
scanf("%d%d%d",&w,&h,&l);
j=l*w;
g=w*h;
n=h*l;
s= 2 *(j+g+n);
printf("%d",s);
getch();
}
