#include <stdio.h>
#include "main.h"

/**
 * print_rev - Prints strings in reverse
 * @s: A pointer that points to a character
 * Return: Nothing.
 */
void print_rev(char *s)
{
	char *last_char = s;
	int count_char = 0;

	while (*last_char != '\0')
	{
		count_char++;
		last_char++;
	}
	last_char--;

	while (last_char >= s)
	{
		putchar(*last_char);
		last_char--;
	}
	putchar('\n');
}
