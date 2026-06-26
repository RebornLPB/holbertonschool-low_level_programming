#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int row, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = 0; spaces < (size - row); spaces++)
			{
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
