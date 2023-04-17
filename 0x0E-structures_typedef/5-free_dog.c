#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs
 * @d: a pointer of dog_t
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d->name != NULL && d != NULL)
	{
		free(d->name);
	}
	if (d->owner != NULL && d != NULL)
	{
		free(d->owner);
	}
	if (d != NULL)
	{
		free(d);
	}
}
