#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of 2 diagonals
 * @a: An integer
 * @size: An integer
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int d1_sum, d2_sum;

	d1_sum = 0;
	d2_sum = 0;
	for (i = 0; i < size; i++)
	{
		d1_sum = d1_sum + a[size * i +i];
	}
	for (i = 0; i < size; i++)
	{
		d2_sum = d2_sum + a[size * i + (size - 1 - i)];
	}
	printf("%d, %d\n", d1_sum, d2_sum);
}
