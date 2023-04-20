#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: a string
 * @n: number of integers
 * Retourn: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int arg;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, int);
		printf("%d", arg);
		if (separator == NULL)
			return;
		printf("%s", separator);
	}
	printf("\n");
}
