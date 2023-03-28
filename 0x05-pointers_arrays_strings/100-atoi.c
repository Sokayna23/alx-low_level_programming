#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The pointer to a character
 * Return: An integer.
 */

int _atoi(char *s)
{
	int i = 1;
	int number = 0;

	if (*s == '-')
	{
		i = -1;
		s++;
	}

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			number = number * 10 + (*s - '0');
		}
		else
		{
			return (0);
		}
		s++;
	}
	return (i * number);
}
