#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9,
 * except 2 and 4, followed by a new line.
 */

void print_most_numbers(void)
{
	int value;

	for (value = '0'; value <= '9'; value++)
	{
		if (value == '2' || value == '4')
		{
			continue;
		}
		_putchar(value);
	}
	_putchar('\n');
}
