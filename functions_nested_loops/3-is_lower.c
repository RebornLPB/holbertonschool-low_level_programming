#include "main.h"

/**
 * _islower - Check if input is in lowercase.
 * @c: The character to check.
 *
 * Description: Check if the input is in lower case.
 * Return: 1 if c is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
