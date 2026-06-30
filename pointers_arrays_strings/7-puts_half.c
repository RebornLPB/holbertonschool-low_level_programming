#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to the input string
 *
 * Description: if the number of characters is odd, the function prints
 * the last (len - (len - 1) / 2) characters. Otherwise it prints the
 * last len/2 characters.
 */
void puts_half(char *str)
{
	int len = 0;
	int half;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	half = (len + 1) / 2;
	half = len - half;
	for (i = half; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
