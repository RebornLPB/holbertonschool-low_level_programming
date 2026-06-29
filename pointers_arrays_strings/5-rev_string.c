#include "main.h"

/**
 * rev_string - reverses a string in place using pointers
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	char *debut = s;
	char *fin = s;
	char tempo;

	while (*fin != '\0')
	{
		fin++;
	}
	fin--;

	while (debut < fin)
	{
		tempo = *debut;
		*debut = *fin;
		*fin = tempo;

		debut++;
		fin--;
	}
}
