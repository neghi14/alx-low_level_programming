#include<stdio.h>
/**
* main - function, entry point
* @argc: # of args passed to program.
* @argv: string array args passed to program.
*
* Description: program to print all arguments it receives.
* Return: Always 0
*/
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
	printf("%s\n", argv[count]);
	}
	return (0);
}
