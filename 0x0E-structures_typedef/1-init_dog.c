#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: a pointer of character of type struct dog
 * @name: A pointer to a character
 * @age: A float number
 * @owner: A pointer to a character
 *
 * Description: Function to initialize a struct dog variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
