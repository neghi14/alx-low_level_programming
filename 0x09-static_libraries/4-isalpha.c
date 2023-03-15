#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: First operand
 *
 * Description: checks for lower and upper alpha chars
 * Return:1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
