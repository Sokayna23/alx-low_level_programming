#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: a string
 * @n: number of strings
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *arg;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, char *);
		if (arg == NULL || *arg == '\0')
			printf("(nil)");
		printf("%s", arg);
		if (!(separator == NULL || *separator == '\0' || i >= n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
