#include "main"

/**
 * _strlen - function to return string length
 *
 * @s: string variable
 *
 * Return: int value of length
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
