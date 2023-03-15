#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * _strdup - function
 * @str: string to duplicate
 *
 * Description: copy a string into new allocated memory
 * Return: duplicated string, or null if fail.
 */
char *_strdup(char *str)
{
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	copy = (char *)malloc(_strlen(str) * sizeof(char) + 1);
	if (copy == NULL)
	{
		free(copy);
		return (NULL);
	}
	_strcpy(copy, str);
	return (copy);
}
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
/**
 * _strcpy - function
 * @src: copy from
 * @dest: copy to
 *
 * Description: copies strng pnted by src to dest with null
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
