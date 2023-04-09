#include <stdio.h>

/**
 * main - prunts all the recieved arguments
 * @argc: integer
 * @argv: a pointer to character
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
