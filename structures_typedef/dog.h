#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure representing a dog
 * @name: The name of the dog (string)
 * @age: The age of the dog (floating point number)
 * @owner: The name of the owner (string)
 *
 * Description: This structure holds basic information about a dog.
 */


typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
