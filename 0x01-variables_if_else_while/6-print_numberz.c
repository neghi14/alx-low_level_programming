#include<stdio.h>
/**
* main -Entry point
* putchar to print single digit numberz
* Return: Always 0 (Success)
*/
int main(void)
{
	int c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
