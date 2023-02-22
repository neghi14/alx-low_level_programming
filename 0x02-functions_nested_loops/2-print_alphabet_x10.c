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
	char ch = 'a';
	int i = 0;

	while (i < 11)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
		_putchar(ch);
		}
		i++;
		_putchar(10);
	}
}
