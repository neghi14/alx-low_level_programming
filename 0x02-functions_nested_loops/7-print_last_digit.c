#include "main.h"

/**
* print_last_digit - function
* @n:first operand
*
* Description: prints last digit of a number.
* Return: Always 0 (success)
*/
int print_last_digit(int n)
{
	n = (n % 10);

	if (n < 0)
	{
		n = (n * -1);
	}
	_putchar(n + '0');
	return (n);
}
