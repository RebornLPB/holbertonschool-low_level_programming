#include "main.h"

/**
 * _islower - Check if input is a letter.
 * @c: The character to check.
 *
 * Description: Check if the input is a letter.
 * Return: 1 if c is letter, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' &&  c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
