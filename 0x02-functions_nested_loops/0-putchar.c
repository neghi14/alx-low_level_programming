#include<stdio.h>
#include "main.h"
/**
 * main - Entry function
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

	while (i < 8)
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar(10);
	return (0);
}
