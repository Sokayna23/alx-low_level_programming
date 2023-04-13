#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatinates two strings
 * @s1: A oointer to first string
 * @s2: A pointer to second string
 * @n: An integer represents the number of bytes
 * Return: A ponter to a string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j;
	unsigned int l1, l2;

	if (s1 == NULL)
	{
		l1 = 0;
	}
	else
	{
		l1 = strlen(s1);
	}
	if (s2 == NULL)
	{
		l2 = 0;
	}
	else
	{
		l2 = strlen(s2);
	}
	p = malloc(sizeof(char) * (l1 + l2) + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
	{
		p[i] = s1[i];
	}
	if (n < l2)
	{
		for (j = 0; j < n; j++)
		{
			p[i + j] = s2[j];
		}
	}
	else
	{
		for (j = 0; j < l2; j++)
		{
			p[i + j] = s2[j];
		}
	}
	return (p);
}
