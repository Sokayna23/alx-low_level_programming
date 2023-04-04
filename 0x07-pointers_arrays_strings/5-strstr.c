#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: A pointer to a character
 * @needle: A pointer to a character
 * Return: A ointer to the beginnig of the substring or 0 if not foud
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] != haystack[i + j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (0);
}
