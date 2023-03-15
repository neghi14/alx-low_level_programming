#include<stdio.h>
/**
* main - function, entry point
* @argc: # of arguments passed to program.
* @argv: array of strings passed each as arg to prog
*
* Description: program to print its own name with a newline.
* Return: always 0
*/
int main(__attribute__ ((unused))int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
