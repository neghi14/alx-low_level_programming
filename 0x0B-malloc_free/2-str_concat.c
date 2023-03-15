#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int _strlen(char *s);
/**
 * str_concat - function
 * @s1: string one to combine to
 * @s2: string two to combine to
 *
 * Description: concat str1 into new memory along with str2
 * Return: both s1 and s2, or null if fail.
 */
char *str_concat(char *s1, char *s2)
{
	char *combo;
	int i, j, k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	combo = malloc((_strlen(s1) + _strlen(s2) + 1) * sizeof(char));
	if (combo == NULL)
	{
		return (NULL);
	}
	i = 0;

	for (j = 0; s1[j]; j++)
	{
		combo[i] = s1[j];
		i++;
	}

	for (k = 0; s2[k]; k++)
	{
		combo[i] = s2[k];
		i++;
	}
	combo[i] = '\0';
	return (combo);
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
