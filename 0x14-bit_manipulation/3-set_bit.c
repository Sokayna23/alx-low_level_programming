#include "main.h"

/**
 * set_bit - it sets the value of a bit to 1 at a given index.
 * @n: unsigned long int
 * @index: the index
 * Return: 1 (success), or -1 (failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
	return (-1);
	}
	*n |= 1UL << index;
	return (1);
}
