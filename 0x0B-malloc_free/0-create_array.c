#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function
 * @size: # of bytes needed to allocate
 * @c: char to be initialized
 *
 * Description: creates array of chars, and initialize
 * Return: pointer to an araay.
 */
char *create_array(unsigned int size, char c)
{
	char *charray;
	unsigned int i;

	charray = (char *)malloc(size * sizeof(char));
	if (charray == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		charray[i] = c;
	}
	charray[i] = '\0';
	return (charray);
}
