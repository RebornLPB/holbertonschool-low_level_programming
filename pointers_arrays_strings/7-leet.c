#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: string to encode.
 *
 * Return: pointer to encoded string.
 */
char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char find[] = "aAeEoOtTlL";
	char replace[] = "4433007711";

	while (str[i] != '\0')
	{
		while (find[j] != '\0')
		{
			if (str[i] == find[j])
			{
				str[i] = replace[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
