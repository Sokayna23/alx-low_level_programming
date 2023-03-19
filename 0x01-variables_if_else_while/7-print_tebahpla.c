#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_l = 'z';

	for (lower_l = 'z'; lower_l >= 'a'; lower_l--)
	{
		putchar(lower_l);
	}
	putchar('\n');
	return (0);
}
