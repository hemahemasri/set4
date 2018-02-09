#include <stdio.h>
#include <string.h>
 
void main()
{
    char d[200];
    int count = 0, i;
 
    printf("enter the string\n");
    scanf("%[^\n]d", d);
    for (i = 0;d[i] != '\0';i++)
    {
        if (d[i] == ' ')
            count++;    
    }
    printf("number of words in given paragraph  are: %d\n", count + 1);
    getch();
}
