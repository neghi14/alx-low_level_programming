#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n: first operand
 *
 * description: a function that prints the sign of a number
 *
 * Return: 1 if greater than zero , -1 if less than zero, 0 if zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
