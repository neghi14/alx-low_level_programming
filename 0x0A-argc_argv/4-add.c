#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
* main - function, entry point
* @argc: # of args passed
* @argv: strings passed indiv as arg to prog
*
* Description: program that adds positive numbers
* Return: 0, 1 if number contains symbol !digits
*/
int main(int argc, char *argv[])
{
	int i, j, val = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] > '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
				else
				{
					val += atoi(argv[i]);
				}
			}
			printf("%d\n", val);
		}
	}
	return (0);
}
