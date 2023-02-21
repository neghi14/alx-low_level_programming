#include<stdio.h>
#include "main.h"
/**
 * Main - Entry function
 *
 * _putchar, function to print string;
 *
 * Return:  Always 0(success)
 *
 */

int main(void)
{
	char ch[] = "_putchar";
	int i = 0;

	while (i < 9)
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar(10);
	return (0);
}
