#include "main.h"

/**
 * _strncpy - Copies a string
 * @src: the pointer to the string to be copied
 * @dest: the pointer to the string to copy to
 * @n: number of bytes to copy
 * Return: a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
