#include <stdio.h>
#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: Parameter that is a pointer that points to a string
 * Return: Notghing.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if  (i % 2 == 0)
		{
			putchar(str[i]);
			i++;
			str++;
		} 
	}
	putchar('\n');
}
