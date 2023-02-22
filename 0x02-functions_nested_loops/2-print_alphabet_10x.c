#include "main.h"

/**
 * print_alphabet_10x - main entry
 *
 * Funtion to print lower case letters from a-z 10x
 *
 *
 */

void print_alphabet_10x(void)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 11)
	{
		_puthchar(ch);
		i++;
		_putchar(10);
	}
}
