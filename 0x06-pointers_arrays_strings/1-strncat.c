#include "main.h"

/**
 * _strlen - Length of a string
 * @s: a pointer that points to a character
 * Return: integer value
 */
int _strlen(char *s)
{
	int count_char = 0;

	while (*s != '\0')
	{
		count_char = count_char + 1;
		s++;
	}
	return (count_char);
}
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
	int L;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	L = _strlen(src);
	j = 0;
	n = 0;
	while (src[j] != '\0')
	{
		if (n < L)
		{
			dest[i] = src[j];
			i++;
			j++;
			continue;
		}
		else
			break;
	}
	dest[i] = '\0';
	return (dest);
}
