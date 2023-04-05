#include "main.h"

/**
 * _strlen_recursion - Returns length of a string
 * @s: pointer to a character
 * Return: an integer that represents the lenght of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len = len + 1;
		s++;
		len = len + _strlen_recursion(s);
	}
	return (len);
}
