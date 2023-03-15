#include<stdio.h>
/**
* main - function, entry point
* @argc: # of arguments passed to program
* @argv: array of strings, each arg ed indiv to program
*
* Description: program to print the number of arguments passed to it
* Return: Always 0
*/
int main(int argc, __attribute__ ((unused))char *argv[])
{
	--argc;
	printf("%d\n", argc);
	return (0);
}
