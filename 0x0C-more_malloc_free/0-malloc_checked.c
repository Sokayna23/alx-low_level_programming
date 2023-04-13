#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory
 * @b: an integer
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(int) * b);
	if (p == NULL)
		exit(98);
	return (p);
}
