#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,fact;
printf("Enter the number:");
scanf("%d",&n);
for(i=1;i<n;i++)
{
 if(n%i==0) 
{
  fact=i;
}
}
if(fact>1) 
{
printf("The number is a composite number!");
}
else 
{
 printf ("This is not a composite number!");
 }
getch():
}


