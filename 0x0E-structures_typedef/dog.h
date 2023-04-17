#ifdef DOG_H
#define DOG_H

/**
 * struct dog - Defines a new type dog
 * @name: member of type tointer to a character
 * @owner: member of type pointer to a character
 * @age: member of type float
 *
 * Description: Structure
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
#endif