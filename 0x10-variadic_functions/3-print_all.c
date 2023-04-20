#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints all types
 * @format: types of arguments
 * Retourn: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *arg;
	char *separator;

	va_start(args, format);
	i = 0;
	separator = "";
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				arg = va_arg(args, char *);
				if (arg)
				{
					printf("%s%s", separator, arg);
					break;
				}
				printf(", (nil)");
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
