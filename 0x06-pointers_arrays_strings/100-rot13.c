#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes rot13
 * @c: pointer to string
 * Return: a pointer to a string
 */

char *rot13(char *c)
{
	int i;
	int j;
	char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char abcrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == abc[j])
			{
				c[i] = abcrot[j];
				break;
			}
		}
	}
	return (c);
}
