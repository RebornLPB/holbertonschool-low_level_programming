#include "main.h"

/**
 * print_alphabet - Print alphabet function
 *
 * Description: Print alphabet and jump to next line.
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
