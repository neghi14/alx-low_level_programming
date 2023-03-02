#include "main.h"
/**
* reverse_array - function
* @a: array operand
* @n: number of elements of the array
*
* Description: reverse content of an array
* Return: 0
*/
void reverse_array(int *a, int n)
{
	int i, end, tmp;

	i = 0;
	end = n - 1;

	for (i = 0; i < n; i++)
		;
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[end];
		a[end] = tmp;
		end--;
	}

	for (i = 0; i < n; i++)
		;
}
