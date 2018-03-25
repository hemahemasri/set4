#include <stdio.h>
#include<conio.h>
int min(int a[50],int n);
void  main 
{
int a[50];
int i,res,n;
printf("no of elements in the array");
scanf("%d",&n);
printf("\narray");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("%d ",a[i]);
}
result=min(a,n);
printf("\n%d",res);
getch();
}
int min(int a[50],int n)
{
int i,min=a[0];
for(i=1;i<n;i++)
{
scanf("%d",&array[i]);
if(a[i]<min)
{
min=a[i];
}
}
return (min);
}	
