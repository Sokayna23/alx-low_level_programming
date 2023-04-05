#include "main.h"

/**
 * factorial - Returns the factorial of a positive integer
 * @n: an integer
 * Return: factorial
 */
int factorial(int n)
{
       if (n < 0)
       {
	      return (-1); 
       }
       if (n == 0)
	       return (1);
       else
	       return (n * factorial(n - 1));
}
