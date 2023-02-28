#include "main.h"
#include <stdio.h>
/**
 * _puts - minic the stdio version of puts
 * @str: the value to process to the stdout.
 */
void _puts(char *str)
{
	while (*str > 0)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}

