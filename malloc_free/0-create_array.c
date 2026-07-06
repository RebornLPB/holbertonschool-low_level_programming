#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it.
 * @size: Size of the array to allocate.
 * @c: Character to initialize each element with.
 *
 * Return: Pointer to the allocated array, or NULL on failure.
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	unsigned int i;
	char *tableau;

	tableau = malloc(sizeof(char) * size);

	if (tableau == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		tableau[i] = c;
	}
	return (tableau);
}
