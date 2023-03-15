#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function
 * @ac: arg1
 * @av: arg2
 *
 * Description: concatenate all args of your program
 * Return: ptr to new str or null if fail
 */
char *argstostr(int ac, char **av)
{
	char *array;
	int x, y, z = 0;
	int strlen = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			strlen++;
	}

	array = malloc(sizeof(char) * (strlen + ac + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++, z++)
		{
			array[z] = av[x][y];
		}
		array[z] = '\n';
		z++;
	}
	array[z + 1] = '\0';
	return (array);
}
