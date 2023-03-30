#include "main.h"

/**
 * reverse_array - Reverses the content of an  array
 * @a: pointer to in integer
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int *last;
	int *first;
	int tmp;

	first = a;
	last = a + n - 1;

	while (first <= last)
	{
		tmp = *first;
		*first = *last;
		*last = tmp;
		first++;
		last--;
	}
}
