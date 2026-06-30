#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int result = 0;
	int signe = 1;
	int test = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			signe = signe * -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			test = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (test == 1)
		{
			break;
		}
		i++;
	}

	return (result * signe);
}
