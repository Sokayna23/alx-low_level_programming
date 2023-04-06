#include "main.h"

/**
 * prime_number - returns a prime number
 * @x: an integer
 * @y: an integer
 * Return: a prime number
 */
int prime_number(int x, int y)
{
	if (x % y == 0 || x < 2)
		return (0);
	if (y > x / 2)
		return (1);
	return (prime_number(x, y + 1));
}
/**
 * is_prime_number - prime number function
 * @n: An integer
 * Return: an integer
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_number(n, 2));
}
