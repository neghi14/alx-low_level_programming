#include "main.h"

/**
 * _islower - main entry
 *
 * Function to return 1 or 0 depending on answer;
 *
 * Return: 1 if c is lower and 0 if otherwise
 *
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
}
