#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *str, *sep = "";

	va_start(ap, format);
	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			while (1)
			{
				if (format[i] == 'c')
				{
					printf("%s%c", sep, va_arg(ap, int));
					break;
				}
				if (format[i] == 'i')
				{
					printf("%s%d", sep, va_arg(ap, int));
					break;
				}
				if (format[i] == 'f')
				{
					printf("%s%f", sep, va_arg(ap, double));
					break;
				}
				if (format[i] == 's')
				{
					str = va_arg(ap, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				}
				sep = "";
				break;
			}
			if (format[i] == 'c' || format[i] == 'i' ||
			    format[i] == 'f' || format[i] == 's')
				sep = ", ";

			i++;
		}
	}

	va_end(ap);
	printf("\n");
}
