#include<stdio.h>
/**
* main - Entry point
* putchar used to lowercase alphabet in reverse
* Return: Always 0 (Success)
*/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
