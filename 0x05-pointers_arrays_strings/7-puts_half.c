#include <stdio.h>
#include "main.h"

/**
 * _strlen - Length of a string
 * @s: a pointer that points to a character
 * Return: integer value
 */
int _strlen(char *s)
{
	int count_char = 0;

	while (*s != '\0')
	{
		count_char = count_char + 1;
		s++;
	}
	return (count_char);
}
/**
 * puts_half - Prints the second half of a string
 * @str: Parameter (pointer to a character)
 * Return: nothing.
 */
void puts_half(char *str)
{
	int i;
	int n;

	while (str[i] != '\0')
	{
		if ((_strlen(str) % 2) != 0)
		{
			n = (_strlen(str) - 1) / 2;
		}
		else
		{
			n = (_strlen(str) + 1) / 2;
		}
		i = n;
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
