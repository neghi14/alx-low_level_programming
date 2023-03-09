#include "main.h"
/**
* _print_rev_recursion - function
* @s: string to print in reverse
*
* Description: function to print a reverse string
* Return: 0
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
