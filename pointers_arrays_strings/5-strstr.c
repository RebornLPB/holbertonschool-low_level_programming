#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to find
 * Return: pointer to beginning of substring or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int a = 0;
	unsigned int b = 0;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	while (haystack[a] != '\0')
	{
		b = 0;
		while (needle[b] == haystack[a + b])
		{
			b++;
		}
		if (needle[b] == '\0')
		{
			return (&haystack[a]);
		}
		a++;
	}
	return (NULL);
}
