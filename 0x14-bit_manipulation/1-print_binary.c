#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 * Return:nothing
 */
void print_binary(unsigned long int n)
{
	int i;
	
	for (i = 0; i < 32; i++)
	{
		_putchar((n & 1) ? '1' : '0');
		n >>= 1;
	}
}
