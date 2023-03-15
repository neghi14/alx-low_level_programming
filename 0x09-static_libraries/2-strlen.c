#include <stdio.h>
#include "main.h"
/**
 * _strlen - function
 * @s: first operand & pointer
 *
 * Description: function that returns the length of a string
 * Return: Always 0
 */
int _strlen(char *s)
{
	int index = 0;

	while (*s != '\0')
	{
		index++;
		s++;
	}
	return (index);
}
