#include <stdio.h>
#include "main.h"

/**
 * print_rev - Prints strings in reverse
 * @s: A pointer that points to a character
 * Return: Nothing.
 */
void print_rev(char *s)
{
	char string = ' ';

	while (*s >= string)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
