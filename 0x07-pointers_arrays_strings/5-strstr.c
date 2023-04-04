#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: A pointer to a character
 * @needle: A pointer to a character
 * Return: A ointer to the beginnig of the substring or 0 if not foud
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			while (haystack[i] == needle[j])
			{
				haystack++;
				needle++;
			}
			if (needle[j] == '\0')
				return (haystack);
		}
	}
	return (0);
}
