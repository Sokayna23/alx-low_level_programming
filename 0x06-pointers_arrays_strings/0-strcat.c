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

	for (i = 0; dest[i] != '\0'; i++);
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + 1] = src[j];
		i++;
	}
	*dest = '\0';
	return(dest);
}
