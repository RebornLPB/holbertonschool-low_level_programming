#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers in a given range
 * @min: The minimum value (starting point)
 * @max: The maximum value (ending point)
 *
 * Description: Allocates memory for a new array and fills it with all
 * integer values from min to max, inclusive.
 *
 * Return: A pointer to the newly allocated array, or NULL if min > max
 * or memory allocation fails
 */
int *array_range(int min, int max)
{
	unsigned int i, temp = 0;
	int *mall;

	if (min > max)
		return (NULL);
	temp = (max - min) + 1;
	mall = malloc(sizeof(int) * temp);

	if (mall == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < temp; i++)
	{
		mall[i] = min;
		min++;
	}
	return (mall);
}
