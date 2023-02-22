#include "main.h"

/**
 * _isalpha - main function
 *
 * function to check if a value is an alphabet
 *
 * Return: 1 if true and 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
