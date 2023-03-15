#include "main.h"
/**
 * _abs - function
 * @r: First operand
 *
 * Description: computes the absolute value of an integer.
 * Return: Always 0 (Success)
 */
int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else
	{
		return (-r);
	}
	return (0);
}
