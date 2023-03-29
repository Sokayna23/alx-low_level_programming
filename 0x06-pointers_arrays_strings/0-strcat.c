#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @src: Parameter  that represents the pointer to a source string
 * @dest: Parameter that represents the pointer to the distination string
 * Return: Character(s).
 */
char *_strcat(char *dest, char *src)
{
	char *cat;

	while (*src != '\0')
	{
		*cat = *src;
		src++;
		cat++;
	}
	while (*dest != '\0')
	{
		*cat = *dest;
		dest++;
		cat++;
	}
	*cat = '\0';
	return (cat);
}
