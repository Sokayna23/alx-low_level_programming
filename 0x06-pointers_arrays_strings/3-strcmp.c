#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: pointer to a string
 * @s2: pointer to a string
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else
		return (s1[i] - s2[i]);
}
