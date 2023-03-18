#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_letter = 'a';
	char upper_letter = 'A';

	while (lower_letter <= 'z' && upper_letter <= 'Z')
	{
		putchar(lower_letter);
		lower_letter++;
		putchar(upper_letter);
		upper_letter++;
	}
	return (0);
}
