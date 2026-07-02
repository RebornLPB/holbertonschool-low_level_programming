#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: string containing characters to match
 *
 * Return: number of bytes in the initial segment of s consisting only of
 *         bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int tmp;
	unsigned int found;

	while (s[a] != '\0')
	{
		tmp = 0;
		found = 0;
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				tmp = 1;
				break;
			}
			b++;
		}
		if (tmp != 0)
		{
			a++;
			found++;
		}
		else
		{
			return (found);
		}
	}
	return (found);
}
