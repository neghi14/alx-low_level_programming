#include "main.h"
#include <stdio.h>
/**
 * print_rev - minic the stdio version of puts
 * @s: the value to process to the stdout in reverse.
 */
void print_rev(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}

	while (count--)
	{
		putchar(*(s + (count)));
	}
	putchar('\n');
}


