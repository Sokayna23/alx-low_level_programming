#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
*/
void srand(unsigned int seed);
int rand(void);

int main(void)
{
	int n;
	unsigned int Rand_MAX = 0;

	srand(time(0));

	n = rand() - Rand_MAX / 2;

	if (n > 0)
		printf("%d is positive", n);
	if (n < 0)
		printf("%d is negative", n);
	if (n == 0)
		printf("%d is zero", n);

	return (0);
}
