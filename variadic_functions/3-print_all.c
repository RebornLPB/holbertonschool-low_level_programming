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
	unsigned int i = 0, j;
	char *str, *sep = "";
	const char t_types[] = "cifs";

	va_start(ap, format);

	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			j = 0;
			while (t_types[j] != '\0' && format[i] != t_types[j])
			{
				j++;
			}

			while (t_types[j] != '\0')
			{
				if (format[i] == 'c')
					printf("%s%c", sep, va_arg(ap, int));
				if (format[i] == 'i')
					printf("%s%d", sep, va_arg(ap, int));
				if (format[i] == 'f')
					printf("%s%f", sep, (float)va_arg(ap, double));
				if (format[i] == 's')
				{
					str = va_arg(ap, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sep, str);
				}
				sep = ", ";
				break;
			}
			i++;
		}
	}
	va_end(ap);
	printf("\n");
}
