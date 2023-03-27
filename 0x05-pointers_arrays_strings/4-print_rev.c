#include <stdio.h>
#include "main.h"

/**
 * print-rev - Prints strings in reverse
 * @s: A pointer that points to a character
 * Return: Nothing.
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
