#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	int n;
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
