#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct conv - Struct association format / function
 * @type: The format character
 * @f: The printing function associated
 */
typedef struct conv
{
	char type;
	void (*f)(va_list *args);
} conv_t;

void print_char(va_list *args);
void print_integer(va_list *args);
void print_float(va_list *args);
void print_string(va_list *args);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
