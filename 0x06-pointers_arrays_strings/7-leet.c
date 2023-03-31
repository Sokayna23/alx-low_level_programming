#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: a pointer to a string
 * Return: a pointer to the resulting string
 */
char *leet(char *str)
{
	int i, j;

	for (i = 0, j = 0; str[i] != '\0'; i++, j++)
	{
		if (str[i] == 'a'|| str[i] == 'A')
			str[j] = '4';
		else if (str[i] == 'e' || str[i] == 'E')
			str[j] = '3';
		else if (str[i] == '0' || str[i] == 'O')
			str[j] = '0';
		else if (str[i] == 't' || str[i] == 'T')
			str[j] = '7';
		else if (str[i] == 'l' || str[i] == 'L')
			str[j] = '1';
		else
			str[j] = str[i];
	}
	str[j] = '\0';
	return (str);
}
