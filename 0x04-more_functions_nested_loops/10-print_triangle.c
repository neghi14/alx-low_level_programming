#include "main.h"

/**
 * print_triangle - print a triangle at a give size.
 * @size : size of triangle to print.
 *
 *
 */
void print_triangle(int size)
{
/*
 * int i: for iteration in for loop also use as a way to subtract.
 *
 * int margin: will recored the amount of whitesapce ill need to print.
 * int dis"tance": is used to offset size.
 * int to_print: is used to tell how many '#' will need to be print per-line
 */
	int i, margin, dis, to_print;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	dis = size - 1;
	for (i = 0 ; i < size ; i++)
	{
/*
 * we set the margin to Zero every iteration. since we're try to only print
 * the right amount of white space. we do some math to dis to set the stopping
 * point
 */
		margin = 0;
		while (margin < (dis - i))
		{
			_putchar(32);
			margin++;
		}

		to_print = size - margin;

		while (to_print > 0)
		{
			_putchar('#');
			to_print--;
		}
		_putchar('\n');
	}
}

