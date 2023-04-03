#include "main.h"

/**
 * _strspn - Calculatess the length of a prefix substring
 * @s: A pointer to a string
 * @accept: A pointer to a string
 * Return: The number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int num = 0;
	int i = 0;
	int j = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				num = num + 1;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (num);
		}
	}
	return (num);
}
