#include "main.h"
/**
 *_puts - function
 * @str: first operand and pointer
 *
 * Description: prints a string, followed by a new line to stdout
 * Return: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
