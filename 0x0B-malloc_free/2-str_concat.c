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

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else if (s1 == NULL && s2)
	{
		return (s2);
	}
	else if (s2 == NULL && s1)
	{
		return (s1);
	}
	s = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
	{
		s1[i] = s2[j];
		i++;
	}
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	return (s);
}
