#include "main.h"
#include <stdio.h>
/**
* print_to_98 - function
* @n: first number to print
*
* description: prints all natural numbers from n to 98, followed by a new line
* Return: Always 0 (success)
*/
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else if (n > 98)
			n--;
	}
	printf("%d\n", n);
}
