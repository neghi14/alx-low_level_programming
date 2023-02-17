#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - entry point
 *
 * Determine last digit and print text using if else
 *
 * Return: Always 0 (Success)
 * */
int main(void)
{
	int n;
	int v;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	v = n % 10;
	printf("Last digit of %d is %d ", n, v);
	if (v < 6 && v!= 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	else if (v > 5)
	{
		printf("and is greater than 5\n");
	}
	else
	{
		printf("and is 0\n");
	}
	return (0);
}
