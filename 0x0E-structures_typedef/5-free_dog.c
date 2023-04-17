#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs
 * @d: a pointer of dog_t
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
