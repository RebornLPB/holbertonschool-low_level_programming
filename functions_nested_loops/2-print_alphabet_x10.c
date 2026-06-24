#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet but x10 function
 *
 * Description: Print alphabet x10 and jump to next line.
 */

void print_alphabet_x10(void)
{
	int qty;
	
	for (qty = 0; qty <= 10; qty++)
	{
		print_alphabet();
	}
	_putchar('\n');
}
