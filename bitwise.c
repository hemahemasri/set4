#include<stdio.h>
void main()
{
int  a,b;
printf("enter the values\n");
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
  printf("value of a=%d,b=%d before swapping",a,b);
printf("value of b=%d,a=%d after swapping",b,a);
return 0;
}
