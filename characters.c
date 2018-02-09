#include <stdio.h>

int main()
{
   char h[1000], ch;
   int i, chr= 0;

   printf("Enter a string: ");
   gets(str);

   printf("Enter a character to find the char: ");
   scanf("%c",&ch);

   for(i = 0; str[i] != '\0'; ++i)
   {
       if(ch == str[i])
           ++chr;
   }

   printf("char of %c = %d", ch, chr);

   return 0;
}
