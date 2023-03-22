#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet x10
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
