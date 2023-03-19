#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num >= 0 && num <= 9)
		{
			putchar(num + '0');
		} else if (num >= 10 && num <= 15)
		{
			putchar(num - 10 + 'a');
		}
	}

	putchar('\n');
	return (0);
}
