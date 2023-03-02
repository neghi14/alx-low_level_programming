#include "main.h"
/**
* cap_string - function
* @s: pointer
*
*Description: function to capitalize all words of a string
* Return: char
*/
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] = (s[0] - 32);


		if (s[i] == ',' || s[i] == '.' || s[i] == ';' || s[i] == '!' ||
		s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '}' ||
		s[i] == '}' || s[i] == ' ' || s[i] == '\n' || s[i] == 9)
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = (s[i + 1] - 32);
				i++;
			}
			else
				i++;
		}
		else
			i++;
	}
	return (s);
}
