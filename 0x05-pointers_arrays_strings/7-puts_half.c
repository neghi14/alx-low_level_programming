#include "main.h"

/**
 * puts_half - print half of a string.
 * @str: string to process.
 */
void puts_half(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}
	if (!(len % 2))
		len /= 2;
	else
		len = (len + 1) / 2;

	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len++;
	}
	_putchar('\n');
}

