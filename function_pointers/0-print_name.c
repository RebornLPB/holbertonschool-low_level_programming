#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name using a provided function
 * @name: The name to print
 * @f: A pointer to a function that prints a string
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
