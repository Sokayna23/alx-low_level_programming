#include "main.h"
#include <string.h>

/**
 * power_of_two - calculates the power of 2
 * @exponent: exponent
 * Return: positive number;
 */
unsigned int power_of_two(unsigned int k)
{
	if (k == 0)
		return (1);
	else
		return (2 * power_of_two(k-1));
}
/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: a pointer of string
 * Return: ampositive number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len, k, n = 0;

	if (!b)
		return (0);
	len = strlen(b);
	for (i = 0; i < len; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			k = len - i - 1;
			n = n + b[i] * power_of_two(k);
			return (n);
		}
	}
	return (0);
}
