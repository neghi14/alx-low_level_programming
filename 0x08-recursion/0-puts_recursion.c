#include "main.h"
#include <stdio.h>
/*#define NULL 0*/
/**
* _puts_recursion - function
* @s: string in which to print
*
* Description: function to print a string with \n
* Return: 0
*/
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar(10);
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
