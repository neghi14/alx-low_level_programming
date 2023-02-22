#include "main.h"

/**
 * print_alphabet_x10 - main entry
 *
 * Function to print lower case letters from a-z 10x
 *
 *
 */

void print_alphabet_x10(void)
{
	char ch = 'a';
	int i = 0;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
		_putchar(ch);
		}
		i++;
		_putchar(10);
	}
}
