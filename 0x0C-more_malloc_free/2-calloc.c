#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function
 * @nmemb: unsigned int array in ptr
 * @size: size of nmemb in ptr
 *
 * Description: allocates memory of an array, set to zero
 * Return: ptr to array of size int, or NULL if fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *setmem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	setmem = malloc(size * nmemb);
	if (setmem == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		setmem[i] = 0;
	}
	return (setmem);
}
