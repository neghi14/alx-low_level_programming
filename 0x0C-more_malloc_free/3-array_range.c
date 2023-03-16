#include "main.h"
#include <stdlib.h>
/**
 * array_range - function
 * @min: minimum value of array
 * @max: max value of array
 *
 * Description: function to create an array of integers
 * Return: ptr to array or null if fail
 */
int *array_range(int min, int max)
{
	int *range, size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = 1;
	size += max - min;
	range = malloc(sizeof(int) * size);
	if (range == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		range[i] = min;
	}
	return (range);
}
