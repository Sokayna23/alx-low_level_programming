#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string
 * @str: A pointer of character
 * Return: A pointer to a string
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * (int)(strlen(str)));
	if (str == NULL || s == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
