#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - Prints a character from variadic arguments
 * @args: Pointer to variadic arguments list
 */
void print_char(va_list *args)
{
	printf("%c", va_arg(*args, int));
}

/**
 * print_integer - Prints an integer from variadic arguments
 * @args: Pointer to variadic arguments list
 */
void print_integer(va_list *args)
{
	printf("%d", va_arg(*args, int));
}

/**
 * print_float - Prints a float from variadic arguments
 * @args: Pointer to variadic arguments list
 */
void print_float(va_list *args)
{
	printf("%f", va_arg(*args, double));
}

/**
 * print_string - Prints a string from variadic arguments
 * @args: Pointer to variadic arguments list
 */
void print_string(va_list *args)
{
	char *str = va_arg(*args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Prints any combination of char, int, float, and string
 * @format: A string where each character represents the type of the
 *	 next variadic argument: 'c' for char, 'i' for integer,
 *	 'f' for float, and 's' for string. NULL pointers for strings are
 *	 printed as "(nil)".
 *
 * Description: The function parses the format string and for each
 *	 recognized type, retrieves the corresponding argument from the
 *	 variadic list and prints it. Values are separated by ", ".
 */
void print_all(const char * const format, ...)
{
	va_list all;
	unsigned int i = 0;
	unsigned int n = 0;
	char *seperator = "";
	conv_t convs[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	va_start(all, format);

	while (format && *(format + i))
	{
		n = 0;
		while (convs[n].type != *(format + i) && convs[n].f != NULL)
		{
			n++;
		}
		if (convs[n].f != NULL)
		{
			printf("%s", seperator);
			convs[n].f(&all);
			seperator = ", ";
		}
		i++;
	}

	va_end(all);
	printf("\n");
}
