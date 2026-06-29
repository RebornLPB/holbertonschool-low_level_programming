#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to the string to be printed in reverse
 *
 * Description: Iterates to the end of the string then prints
 * each character in reverse order using _putchar.
 */
void print_rev(char *s)
{
int len = 0;

while (s[len] != '\0')
{
	len++;
}

len--;
while (len >= 0)
{
	_putchar(s[len]);
	len--;
}
_putchar('\n');

}
