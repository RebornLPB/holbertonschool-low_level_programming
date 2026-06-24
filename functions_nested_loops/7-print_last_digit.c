#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The integer to check
 *
 * Return: Last digit of a number.
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		_putchar(-n + '0');
		return (-n);
	}
	else
	{
		_putchar(n + '0');
		return (n);
	}
}
