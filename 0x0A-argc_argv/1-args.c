#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments passed into a program
 *@argc: an integer
 *@argv: a pointer to a character
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", *argv[argc]);
	return (0);
}
