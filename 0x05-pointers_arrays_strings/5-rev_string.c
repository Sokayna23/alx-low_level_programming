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
 * rev_string - Reverses strings
 * @s: Pointher that points to a character
 * Return: nothing.
 */
void rev_string(char *s)
{
	char *first_char;
	char *last_char;
	char tmp;

	first_char = s;
	last_char = s + _strlen(s) - 1;

	while (first_char < last_char)
	{
		tmp = *first_char;
		*first_char = *last_char;
		*last_char = tmp;
		first_char++;
		last_char--;
	}
}
