#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @src: Parameter  that represents the pointer to a source string
 * @dest: Parameter that represents the pointer to the distination string
 * Return: Character(s).
 */
char *_strcat(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *dest + *src;
		src++;
	}
	*dest = '\0';
	return (dest);
}
