#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: a pointer of string
 * Return: ampositive number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		n = (n << 1) + (*b - '0');
		b++;
	}
	return (n);
}
