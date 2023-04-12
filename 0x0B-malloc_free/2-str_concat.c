#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - Concatinates two strings
 * @s1: First string
 * @s2: second string
 * Return: A pointer to a string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int j, i;
	unsigned int l1 = strlen(s1);
	unsigned int l2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s = malloc(sizeof(char) * (l1 + l2 + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		s[i] = s1[i];
	for (j = 0; j < l2; j++)
		s[i + j] = s2[j];
	s[i + j] = '\0';
	return (s);
}
