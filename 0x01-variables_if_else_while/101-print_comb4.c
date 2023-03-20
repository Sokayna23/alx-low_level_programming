#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z;

	for (x = 48; x < 56; x++)
	{
		for (y = 49; y < 57; y++)
		{
			for (z = 50; z < 58; z++)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x < y || y < z)
				{
				if (x != 55 || y != 56 || z != 57)
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
