#include "main.h"

/**
 * _strlen_recursion - Returns length of a string
 * @s: pointer to a character
 * Return: an integer that represents the lenght of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (0);
	if (*s != '\0')
	{
		len = len + 1;
		s++;
		len = len + _strlen_recursion(s);
	}
	return (len);
}
/**
 * is_palindrome_0 - compares the characters of a string
 * @s: A pointer to a character
 * @len: length
 * @i: index
 * Return: an integer
 */
int is_palindrome_0(char *s, int len, int i)
{
	if (i >= len)
		return (1);
	if (s[i] != s[len - 1])
		return (0);
	return (is_palindrome_0(s, len - 1, i + 1));
}
/**
 * is_palindrome - tests if a string is plindrome or not
 * @s: A pointer to a character
 * Return: an integer
 */
int is_palindrome(char *s)
{
	int len, i;

	i = 0;
	len = _strlen_recursion(s);
	return (is_palindrome_0(s, len, i));
}
