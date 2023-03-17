#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry oint
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_degit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_degit = n % 10;

	if (last_degit > 5)
		printf("Last degit of %d is %d and is greater than 5\n", n, last_degit);
	else if (last_degit == 0)
		printf("Last degit of %d is %d and is 0\n", n, last_degit);
	else if (last_degit < 6)
		printf("Last degit of %d is %d and is less than 6 and not 0\n", n, last_degit);
	return (0);
}
