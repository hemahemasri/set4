#include<iostream.h>
#include<conio.h>
void main()
{
int n,a1,a2,ct;
clrscr();
cout<<"enter the number for check whether it is in between the two numbers:";
cin>>n;
cout<<"enter the 2 numbers";
cin>>a1>>a2;
for(int i=1;i<a2;i++)
{
if(n==(a1+1))
{
ct=1;
}
else
{
ct=0;
}
}
if(ct==1)
{
cout<<"present inbetween the 2 numbers";
}
else
{
cout<<"the no is not present inbetween the 2 numbers";
}
getch();
}
