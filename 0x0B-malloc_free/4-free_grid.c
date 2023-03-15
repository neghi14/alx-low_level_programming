#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function
 * @grid: dbl pointer
 * @height: height
 *
 * Description: frees a 2d grid.
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
