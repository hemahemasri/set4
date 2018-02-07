#include <stdio.h>
#include <conio.h>
void main()
{
	char b[100];
	int l,i,word=1;
	clrscr();
	printf("\nENTER A STATEMENT: ");
	gets(b);
	l=strlen(b);
	for(i=0;i<l;i++)
	{
		if(a[i]!=' ' && a[i+1]==' ')
			word=word+1;
	}
	printf("\nTHERE ARE %d WORDS IN THE STATEMENT",word);
	getch();
}
