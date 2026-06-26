#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line.
 */


void print_numbers(void)
{
	int value;

	for (value = '0'; value <= '9'; value++)
	{
		_putchar(value);
	}
	_putchar('\n');
}
