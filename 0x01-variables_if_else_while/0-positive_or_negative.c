#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int Rand_MAX;

	srand(time(0));

	n = rand() - Rand_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive", n);
	} else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is zero", n);
	}
	return (0);
}