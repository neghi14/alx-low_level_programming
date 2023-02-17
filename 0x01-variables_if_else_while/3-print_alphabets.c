#include<stdio.h>
/**
* main - Entry point
* putchar with for loop-writing alphabet 2 ways to stdout
* Return: Always 0 (Success)
*/
int main(void)
{
	char ch = 'a';
	char c = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
