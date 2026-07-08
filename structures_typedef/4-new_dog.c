#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog and copies its data without helper functions.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the new dog (dog_t), or NULL if it fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int name_len = 0, owner_len = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[name_len] != '\0')
		name_len++;
	while (owner[owner_len] != '\0')
		owner_len++;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (name_len + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i <= name_len; i++)
		d->name[i] = name[i];

	d->owner = malloc(sizeof(char) * (owner_len + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i <= owner_len; i++)
		d->owner[i] = owner[i];
	d->age = age;

	return (d);
}
