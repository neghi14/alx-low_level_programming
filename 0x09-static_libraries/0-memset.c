#include "holberton.h"
/**
* _memset - function
* @s: A pointer to the memory area to be filled.
* @b: The character to fill the memory area with.
* @n: The number of bytes to be filled.
*
* Description: Function to fill memory with a constant byte
* Return: pointer to filled memory of s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

