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

	for (; s[i] != '\0'; i++)
	{
		for (; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				num = num + 1;
			}
			else
				return (num);
		}
	}
	return (num);
}
