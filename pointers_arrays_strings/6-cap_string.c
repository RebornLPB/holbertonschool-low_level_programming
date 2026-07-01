#include "main.h"

/**
 * is_separator - Checks if a character is a word separator
 * @c: The character to test
 *
 * Return: 1 if it is a separator, 0 otherwise
 */

int is_separator(char c)
{
	int i = 0;
	char separators[] = " \t\n,;.!?\"(){}";

	while (separators[i] != '\0')
	{
		if (c == separators[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to modify
 *
 * Return: A pointer to the modified string
 */

char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 65 && str[i] <= 90)
	{
		str[i] -= 32;
	}
	i = 1;

	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			if (is_separator(str[i - 1]))
			{
				str[i] -= 32;
			}
		}
		i++;
	}

	return (str);
}
