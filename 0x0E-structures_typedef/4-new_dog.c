#include "dog.h"
#include <stdlib.h>

/**
 * *_strcpy - Entry Function
 * @dest: char
 * @src: char
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
/**
 * _strlen - Length of a string
 * @s: a pointer that points to a character
 * Return: integer value
 */
int _strlen(char *s)
{
	int count_char = 0;

	while (*s != '\0')
	{
		count_char = count_char + 1;
		s++;
	}
	return (count_char);
}
/**
 * new_dog - Creates a new dog
 * @name: a pointer to a character
 * @age: a float number
 * @owner: A pointer to a character
 * Return: a pointer to a dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

	puppy = malloc(sizeof(dog_t));
	if (puppy == NULL)
	{
		return (NULL);
	}
	if (name != NULL)
	{
		puppy->name = malloc(sizeof(char) * ( _strlen(name) + 1));
		if (puppy->name == NULL)
		{
			free(puppy);
			return (NULL);
		}
		_strcpy(puppy->name, name);
	}
	else
		puppy->name = NULL;
	puppy->age = age;
	if (owner != NULL)
	{
		puppy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
		if (puppy->owner == NULL)
		{
			free(puppy);
			return (NULL);
		}
		_strcpy(puppy->owner, owner);
	}
	else
		puppy->owner = NULL;
	return (puppy);
}
