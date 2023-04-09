#include <stdio.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The pointer to a character
 * Return: An integer.
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int integer = 0;
	int sign = 1;
	int is_digit = 0;

	while (s[i] != '\0')
	{
		if (s[i] == 45)
		{
			sign = sign * (-1);
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			is_digit = 1;
			integer = (integer * 10) + (s[i] - '0');
			i++;
		}
		if (is_digit == 1)
		{
			break;
		}
		i++;
	}
	integer = integer * sign;
	return (integer);
}

/**
 * main - Calculates sum of positive numbers
 * @argc: an integer represents the size of the arry argv
 * @argv: a pointer to a character
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		while (*argv[i] != '\0')
		{
			if (!(*argv[i] >= 48 && *argv[i] <= 97))
			{
				printf("Error\n");
				return (1);
			}
			add = add + _atoi(argv[i]);
			i++;
		}
	}
	printf("%d\n", add);
	return (0);
}
