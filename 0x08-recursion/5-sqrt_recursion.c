#include "main.h"

/**
 * natural_sqrt - Returns a natural square root
 * @x: an integer
 * @y: an integer
 * Return: the square root of a number (natural)
 */
int natural_sqrt(int x, int y)
{
	if (y == x * x)
		return (x);
	else if (y < x * x)
		return (-1);
	x++;
	return (natural_sqrt(x, y));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: an integer
 * Return: an integer
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (natural_sqrt(1, n));
}
