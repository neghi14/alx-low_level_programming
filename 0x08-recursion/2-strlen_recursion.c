#include "main.h"
#include <stdio.h>
/**
* _strlen_recursion - function
* @s: string counting from
*
* Description: return with length of a string.
* Return: integer
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
