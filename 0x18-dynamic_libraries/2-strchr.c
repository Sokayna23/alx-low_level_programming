#include "main.h"
#include <string.h>

/**
 * _strchr - Locates a character in a string
 * @s: A pointer to a string
 * @c: the character we wants to locate
 * Return: a pointer to the first occurrence of the char c or 0 if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
