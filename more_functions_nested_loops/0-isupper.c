#include "main.h"

/**
 * _isupper - Checks for uppercase characters
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */


char _isupper(char c)
{
	if (c <= 'A' && c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
