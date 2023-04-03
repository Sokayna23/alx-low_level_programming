#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - Reverses strings
 * @s: Pointher that points to a character
 * Return: nothing.
 */
void rev_string(char *s)
{
	char *first_char;
	char *last_char;
	char tmp;

	first_char = s;
	last_char = s + strlen(s) - 1;
	while (first_char < last_char)
	{
		tmp = *first_char;
		*first_char = *last_char;
		*last_char = tmp;
		first_char++;
		last_char--;
	}
}
/**
 * _atoi - Converts a string to an integer.
 * @s: The pointer to a character
 * @i: an integer
 * Return: An integer.
 */
int _atoi(char *s, int i)
{
	if (i < (int) strlen(s))
		return (s[strlen(s) - 1 - i] - '0');
	return (0);
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
	int N1, N2, sum, i, k, L, L1, L2;

	L1 = strlen(n1);
	L2 = strlen(n2);
	if (L1 > L2)
		L = L1;
	else
		L = L2;
	i = 0;
	k = 0;
	for (i = 0; i < L; i++)
	{
		N1 = _atoi(n1, i);
		N2 = _atoi(n2, i);
		sum = N1 + N2 + k;
		if (sum > 9)
		{
			k = 1;
			sum = sum - 10;
		}
		else
			k = 0;
		r[i] = sum + 48;
	}
	if (L + 1 < size_r)
	{
		if (k == 1)
		{
			r[i] = k + 48;
			i++;
		}
		r[i] = '\0';
		rev_string(r);
		return (r);
	}
	else
		return (0);
}
