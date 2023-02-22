#include <stdio.h>
#include "main.h"
/**
 * main -entry point
 *
 * print lowercase of all alphabets
 *
 * n - variable that store a char
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
		char c = 'a'

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar(10);
		return (0);
}
