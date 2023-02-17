#include<stdio.h>
/**
* main - Entry point
* putchar to print combinations of sing dig numbers
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i < '9')
			{
			putchar(',');
			putchar(' ');
			}
		i++;
	}
	putchar(10);
	return (0);
}
