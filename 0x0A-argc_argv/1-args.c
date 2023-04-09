#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments passed into a program
 *@argc: an integer
 *@argv: a pointer to a character
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int nargs = 0;

	if (argc == 1)
		printf("%d\n", nargs);
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] != '\0')
				nargs++;
		}
	}
	printf("%d\n", nargs);
	return (0);
}
