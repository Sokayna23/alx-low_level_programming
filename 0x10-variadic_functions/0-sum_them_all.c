#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - does the sum of its parameters
 * @n: first argument and it is a constant integer
 * Return: sum, 0 otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum, arg;

	va_start(args, n);
	if (n == 0)
		return (0);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, int);
		sum = sum + arg;
	}
	va_end(args);
	return (sum);
}
