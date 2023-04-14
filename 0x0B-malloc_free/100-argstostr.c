#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * argstostr - Concatinates all the arguments of a program
 * @ac: An integer
 * @av: A pointer to an array
 * Return: A pointer to a new string
 */
char *argstostr(int ac, char *av[])
{
	int i, j;
	int l;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	l = 0;
	for (i = 0; i < ac; i++)
	{
		l = l + strlen(av[i]) + 1;
	}
	s = malloc(sizeof(char) * l + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (*av[i] != '\0')
		{
			s[j] = *av[i];
			j++;
			i++;
		}
		s[j] = '\n';
	}
	s[j] = '\0';
	return (s);
}
