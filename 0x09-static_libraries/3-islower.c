#include "main.h"
/**
 * _islower - function to check for lowercase char
 * @c: first operand
 *
 * Description:check for lowercase letters
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
