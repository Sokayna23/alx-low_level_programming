#include "main.h"

/**
 * _puts_recursion - Prints a string
 * @s: APointer to character
 * Return: nothing
 */
void  _puts_recursion(char *s)
{
if (*s == '\0')
{
	_putchar('\0');
}
_putchar(*s);
s++;
_putchar('\n');
_puts_recursion(s);
}
