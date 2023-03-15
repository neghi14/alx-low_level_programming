#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function
 * @width: width of grid
 * @height: height of grid
 *
 * Description: return a pointer to a 2 dimensional array of integers
 * Return: null if negative, return pointer success
 */
int **alloc_grid(int width, int height)
{
	int rows, columns;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (rows = 0; rows < height; rows++)
	{
		array[rows] = malloc(width * sizeof(int));
		if (array[rows] == NULL)
		{
			for (; rows >= 0; rows--)
			{
				free(array[rows]);
			}
			free(array);
			return (NULL);
		}
	}

	for (rows = 0; rows < height; rows++)
	{
		for (columns = 0; columns < width; columns++)
			array[rows][columns] = 0;
	}
	return (array);
}
