#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to new concatenated string, or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	char *result;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	result = malloc(sizeof(char) * (i + j + 1));

	if (result == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		result[k] = s1[k];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		result[k] = s2[j];
		k++;
	}
	result[k] = '\0';
	return (result);
}
