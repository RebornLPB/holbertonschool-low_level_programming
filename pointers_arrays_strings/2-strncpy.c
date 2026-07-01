#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to copy.
 *
 * Return: Pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
