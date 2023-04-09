#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers
 * @argc: an integer represents the size of the array argv[]
 * @argv: a pointer to a character
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int multp;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	multp = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", multp);
	return (0);
}
