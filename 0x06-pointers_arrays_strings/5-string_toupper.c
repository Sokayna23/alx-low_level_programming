#include "main.h"

/**
 * string_toupper - Changes lowercase of a string to uppercase
 * @c: pointer to character
 * Return: character(s)
 */
char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 'a' - 'A';
		}
		i++;
	}
	return (c);
}
