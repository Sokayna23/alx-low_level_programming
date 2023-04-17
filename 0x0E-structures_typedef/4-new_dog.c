#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: a pointer to a character
 * @age: a float number
 * @owner: A pointer to a character
 * Return: a dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

	puppy = malloc(sizeof(dog_t));
	if (puppy == NULL)
		return (NULL);
	puppy->name = name;
	puppy->age = age;
	puppy->owner = owner;
	return (puppy);
}
