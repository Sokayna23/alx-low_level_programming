#include "main.h"
/**
 * set_string - Sets the value of a a pointer to char
 * @s: A pointer to a pointer that oints to a character
 * @to: A pointer to a character
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
