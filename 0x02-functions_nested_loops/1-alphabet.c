#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - entry point
 *
 * _putchar lowercase of all alphabets
 *
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar(10);
		return (0);
}
