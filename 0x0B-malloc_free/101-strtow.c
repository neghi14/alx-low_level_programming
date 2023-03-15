#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int _strlen(char *s);
/**
 * strtow - function
 * @str: string to split
 *
 * Description: function to split a string into words
 * Return: pointer or NULL if fail
 */
char **strtow(char *str)
{
	char **split;

	split = malloc(_strlen(str) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	if (split == NULL)
		return (NULL);

	return (split);
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
