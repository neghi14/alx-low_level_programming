#include "main.h"
/**
* _pow_recursion - function
* @x: integer to find value
* @y: integer raised to the power of
*
* Description: function to return value of x to power of y.
* Return: 0
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
		if (y == 0)
		{
			return (1);
		}
			if (x > 0 || x < 0)
			{
				return (x * _pow_recursion(x, y - 1));
			}
		return (0);
}
