#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14,
 * followed by a new line.
 */

void more_numbers(void)
{
	int value;
	int qty;

	for (qty = 0; qty <= 10; qty++)
	{
		for (value = 0; value <= 14; value++)
		{
			if (value > 9)
			{
				_putchar((value / 10) + '0');
			}
			_putchar((value % 10) + '0');
			_putchar('\n');
		}
	}
}
