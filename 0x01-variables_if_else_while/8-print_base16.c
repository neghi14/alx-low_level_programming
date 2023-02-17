#include<stdio.h>
/**
* main - Entry point
* putchar to print all base16s to lowercase
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = '0';
	char c = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
