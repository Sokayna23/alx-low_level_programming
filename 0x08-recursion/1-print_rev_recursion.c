#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - Prints strings in reverse.
 * @s: A pointer
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
