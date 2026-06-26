#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14,
 * followed by a new line.
 */

void more_numbers(void)
{
	int value;
	int qty;

	for (value = '0'; value <= '14'; value++)
	{
		for (qty = '0'; qty <= '10'; qty++)
		{
			_putchar(value);
		}
	}
	_putchar('\n');
}
