#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: pointer to a string (source)
 * @dest: pointer to a string (destination buffer)
 * @n: an integer that represents the number of bytes
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
