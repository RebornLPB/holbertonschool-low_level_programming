#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Description: Formats output with proper spacing using _putchar.
 * Single-digit products are preceded by two spaces after the comma,
 * while two-digit products are preceded by one space.
 */

void times_table(void)
{
	int row;
	int col;
	int value;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			value = row * col;
			if (col == 0)
			{
				_putchar(value + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (value < 10)
				{
					_putchar(value);
				}
				else
				{
					_putchar(value + '0');
					_putchar(value + '0');
				}
			}
		}
		_putchar('/n');
	}
}
