#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: pointer to the byte in s that matches one of the bytes in
 *         accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int a = 0;
	unsigned int b;

	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				return (&s[a]);
			}
			b++;
		}
		a++;
	}
	return (NULL);
}
