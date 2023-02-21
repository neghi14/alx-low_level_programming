#include <stdio.h>

/**
 * main -entry point
 *
 * print lowercase of all alphabets
 *
 * n - variable that store a char
 *
 * Return: Always 0
 */

void print_alphabet(char n);

int main(void)
{
	print_alphabet('a');
	return (0);
}
void print_alphabet(char n)
{

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	printf("\n");
	return (0);
}
