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
	int i = 0;
	int L = 0;

	while (dest[L] != '\0')
	{
		L++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[L + i] = src[i];
		i++
	}
	dest[L + i] = '\0';
	return (dest);
}
