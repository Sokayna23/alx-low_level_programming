#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hex_num;

	for (hex_num = 0; hex_num <= 9; hex_num++)
	{
		putchar(hex_num);
	}
	for (hex_num = 61; hex_num <= 66; hex_num++)
	{
		putchar(hex_num);
	}
	putchar('\n');
	return (0);
}
