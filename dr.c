#include <stdio.h>
int main()
{
    long long h;
    int count = 0;
    clrscr();
    printf("Enter an integer: ");
    scanf("%lld", &h);
    while(h != 0)
    {
        // h = h/10
        h /= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
    getch();
}
