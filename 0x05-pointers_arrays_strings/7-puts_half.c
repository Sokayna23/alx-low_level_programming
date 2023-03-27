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
	int len = _strlen(str);
	int mid = len / 2;
	char *p = str + mid;

	str = str + mid;
	putchar(p);
	putchar('\n');
}
