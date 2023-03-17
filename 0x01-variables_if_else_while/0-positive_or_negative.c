#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
*/
void srand(void);
int rand(void);

int main(void)
{
	signed int n;
	unsigned int Rand_MAX = 0;

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
