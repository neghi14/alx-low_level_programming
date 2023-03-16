#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int _strlen(char *s);
/**
 * string_nconcat - function
 * @s1: string one to combine to
 * @s2: string two to combine to
 * @n: n bytes of s2 to concat
 *
 * Description: concat str1 into new memory along with n bytes of str2
 * Return: both s1 and s2, or null if fail.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, len2;
	char *combo;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len2 = _strlen(s2);
	if (len2 > n)
	{
		len2 = n;
	}

	combo = malloc(sizeof(char) * (_strlen(s1) + len2 + 1));
	if (combo == NULL)
	{
		free(combo);
		return (NULL);
	}
	i = 0;
	for (j = 0; s1[j]; i++, j++)
	{
		combo[i] = s1[j];
	}
	for (k = 0; k < len2; i++, k++)
	{
		combo[i] = s2[k];
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
	unsigned int index = 0;

	while (*s != '\0')
	{
		index++;
		s++;
	}
	return (index);
}
