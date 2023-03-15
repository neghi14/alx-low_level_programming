#include "holberton.h"
/**
* _strcat - function
* @dest: add to string
* @src: add from string
*
* function to concat two strings
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int len;
	int len2;

	for (len = 0; dest[len]; len++)
		;
	for (len2 = 0; src[len2]; len2++)
	{
		dest[len] = src[len2];
		len++;
	}
	return (dest);
}
