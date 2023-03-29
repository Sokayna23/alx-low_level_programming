#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @src: Parameter  that represents the pointer to a source string
 * @dest: Parameter that represents the pointer to the distination string
 * Return: Character(s).
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
