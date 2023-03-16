#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - function
 * @b: unsigned int to allocate memory
 *
 * Description: create a function to allocate memory.
 * Return: ptr, exit(98) if fail
 */
void *malloc_checked(unsigned int b)
{
	void *alloc;

	alloc = malloc(b);
	if (alloc == NULL)
		exit(98);

	return (alloc);
}
