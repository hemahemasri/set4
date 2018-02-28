#include <stdio.h>
 void swap(int, int);
 void main()
{
int a,b;
printf("Enter the value of a and b\n");
scanf("%d%d",&a,&b);
printf("Before Swapping\na = %d\nb = %d\n", a, b);
swap(a,b); 
printf("After Swapping\nb= %d\na = %d\n", b, a);
 }
void swap(int x, int y)
{
int temp;
temp = y;
y = x;
x = temp;
printf("Values of x and y is %d  %d\n",a,b);
getch();
}
