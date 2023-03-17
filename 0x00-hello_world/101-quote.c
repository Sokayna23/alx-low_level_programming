#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char string[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i = 0;

	while (string[i] != '\0')
	{
		 putchar(string[i]);
		 i++;
	}
	return (1);
}
