#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Length of a string
 * @s: a pointer that points to a character
 * Return: integer value
 */
int _strlen(char *s)
{
	int count_char = 0;

	while (*s != '\0')
	{
		count_char = count_char + 1;
		s++;
	}
	return (count_char);
}
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
 *infinite_add - Adds two numbers
 *@n1: pointer to a string (number 1)
 *@n2: pointer to a string (number 2)
 *@r: pointer to a string (the buffer to store the result of the addition)
 * @size_r: the buffer size
 *Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int N1, N2, N, len;

	N1 = _atoi(n1);
	N2 = _atoi(n2);
	N = N1 + N2;
	r = malloc(sizeof(char) * (size_r));
	if (r == NULL)
		return (0);
	sprintf(r, "%d", N);
	len = _strlen(r);

	if (len < size_r)
	{
		r[len] = '\0';
		return (r);
	}
	else
	{
		free(r);
		return (0);
	}
}
