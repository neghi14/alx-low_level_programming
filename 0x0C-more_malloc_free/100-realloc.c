#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
/**
 * _realloc - reallocates memory using malloc and free
 * @ptr: void pointer to previously allocated memory
 * @old_size: size of old allocated memory
 * @new_size: size of newly allocated memory
 * Return: pointer to newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int u;
	char *mem;
	char *copy;

	copy = ptr;
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	mem = malloc(new_size);
	if (mem == NULL)
	{
		free(mem);
		return (NULL);
	}
	if (new_size < old_size)
	{
		for (u = 0; u < new_size; u++)
			mem[u] = copy[u];
	}
	if (new_size > old_size)
	{
		for (u = 0; u < old_size; u++)
			mem[u] = copy[u];
	}
	free(ptr);
	return (mem);
}
