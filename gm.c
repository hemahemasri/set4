#include<stdio.h>
#include<conio.h>
void main()
{
char day[40];
int ch;
printf("\n  !!!!!!holiday or not!!!!!!");
printf("\n enter the day");
scanf("%s",day);
printf("\n enter your choice");
switch(ch)
{
case 1:printf("\n MONDAY");
           printf("\n it is a working day:-)");
           break;
case 2:printf("\n TUESDAY");
           printf("\n it is a working day:-)");
           break;
case 3:printf("\n WEDNESDAY");
           printf("\n it is a working day:-)");
           break;
case 4:printf("\n THURSDAY");
           printf("\n it is a working day:-)");
           break;
case 5:printf("\n FRIDAY");
           printf("\n it is a working day:-)");
           break;
case 6:printf("\n SATURDAY");
           printf("\n it is a working day:-)");
           break;
case 7:printf("\n ****SUNDAY****");
           printf("\n it is a holiday:-)");
           break;
default:printf("invalid");
}
printf("_______thank you__________");
getch();
}
