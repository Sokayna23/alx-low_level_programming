#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: an integer
 * Return: an integer
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (0);
if (n == 1)
return (1);
return (_pow_recursion(n, 1));
}
/**
 * _pow_recursion - returns the power of x to y
 * @x: an integer
 * @y: an integer
 * Return: an integer
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
if (x == 0)
return (0);
else
return (x * _pow_recursion(x, y - 1));
}
