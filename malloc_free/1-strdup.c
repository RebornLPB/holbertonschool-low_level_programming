#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string by allocating new memory
 * @str: pointer to the source string to duplicate
 *
 * Description: Allocates sufficient memory for a copy of the string
 *              pointed to by str, copies the string including the
 *              terminating null byte, and returns a pointer to the
 *              newly allocated copy.
 *
 * Return: pointer to the newly allocated copy of str, or NULL if
 *         str is NULL or memory allocation fails
 */

char *_strdup(char *str)
{
	int i;
	int j;
	char *result;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{

	}
	result = malloc(sizeof(char) * (i + 1));

	if (result == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		result[j] = str[j];
	}
	return (result);
}
