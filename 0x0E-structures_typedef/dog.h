#ifndef DOG_H
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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
