#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int check_change(int money);
int is_number(char *s);

/**
 * main - Program that prints the minimum number of coins to make change.
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0.
 **/

int main(int argc, char *argv[])
{
	if (argc < 2 && argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
