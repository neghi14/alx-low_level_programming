#include "main.h"

/**
 * swap_int - Function to swap values
 *
 * @a: variables to swap
 * @b: variable to swap
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
