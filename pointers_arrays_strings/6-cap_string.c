#include "main.h"

/**
 * cap_string - capitalize all words in a string
 * @str: string to modify
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] <= 90 && str[i] >= 65)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
