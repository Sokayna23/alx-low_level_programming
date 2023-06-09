#include "main.h"

/**
 * _memcpy - Copies bytes from memory area source to memory area destination
 * @dest: A pointer to string (destination)
 * @src: A pointer to a string (source)
 * @n: An integer represents the number of bytesto be copied
 * Return: A pointer to a string (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
