#include "main.h"
/**
* factorial - function
* @n: integer parameter
*
* Description: function to return factorial of a given number
* Return: 0
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
