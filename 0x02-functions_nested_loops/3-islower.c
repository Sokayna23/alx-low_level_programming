#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: Description of parametre c
 *
 * Return: 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (0);
	else
		return (0);
}
