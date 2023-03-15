#include "main.h"
/**
 * _strcpy - function
 * @src: copy from
 * @dest: copy to
 *
 * Description: copies strng pnted by src to dest with null
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
