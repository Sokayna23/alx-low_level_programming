#include "main.h"

/**
 * _memset - Fills memory witha a constant byte
 * @s: Apointer to the memory area that contains the bytes
 * @b: The constant byte
 * @n: The number of bytes of the memory
 * Return: A Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
