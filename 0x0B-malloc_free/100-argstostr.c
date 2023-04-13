#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - Concatinates all the arguments of a program
 * @ac: An integer
 * @av: A pointer to an array
 * Return: A pointer to a new string
 */
char *argstostr(int ac, char *av[])
{
	int i;

	if (ac == 0|| av == NULL)
		return (NULL);
	av = malloc(sizeof(char) * (ac + 1));
	if (av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		printf("%s\n", av[i]);
	}
	return (*av);
}
