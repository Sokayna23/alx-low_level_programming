#include <stdio.h>
#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: First parametre of the function is a pointer to an integer
 * @b: Second parameter of the function that is apointer to an integer
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
