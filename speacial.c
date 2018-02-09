include<stdio.h>
void main()
{
int str[100];
int ca,cs,csk;
int counter;
clrscr();
a=s=sk=0;
pritnf("\n enter the string:");
gets(str);
for(counter==0;str[counter]!=NULL;counter++)
{
if(str[counter]>='A'&&str[counter]<='z')||(str[counter]>='a'&&str[counter]<='z')
{
a++;
elseif(str[counter]=='')
s++;
}
else
sk++;
}
printf("\n spaces:%d",cs);
getch();
}
