#include "main.h"

/**
 * print_numbers - Prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: numbers: from 0 to 9
 */


void print_numbers(void)
{
	int value;

	for (value = '0'; value <= '9'; value++)
	{
		putchar(value);
	}
	putchar('\n');
}
