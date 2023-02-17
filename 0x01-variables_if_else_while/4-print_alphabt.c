#include<stdio.h>
/**
* main - Entry point
*
* putchar - using function to print alphabet -q and -e to stdio
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			;
		else
		putchar(ch);
	ch++;
	}
putchar(10);
return (0);
}
