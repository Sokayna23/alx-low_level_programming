#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints a string
 * @str: A pointer to a character
 * Return: Nothing.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
