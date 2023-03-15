#include "main.h"
/**
 * _isupper - function
 * @c: first operand
 *
 * Description: checking for uppercase letters.
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
