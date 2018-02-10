#include<stdio.h>
void main()
{
int  i,k;
printf("enter the values\n");
scanf("%d%d",&i,&k);
i=i^k;
k=i^k;
i=i^k;
printf("value of i=%d,k=%d after swapping",i,k);
return 0;
}
