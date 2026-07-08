#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to assign to the dog
 * @age: age to assign to the dog
 * @owner: owner name to assign to the dog
 *
 * This function assigns the provided values to the fields of *d if d
 * is not NULL. It does not duplicate or allocate memory for the strings.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
