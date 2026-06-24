#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 * 
 * Description: Prints every minute starting from 00:00 to 23:59.
 * Return: Day of Jack Bauer.
 */

void jack_bauer(void)
{
	int heures;
	int minutes;

	for (heures = 0; heures < 24; heures++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar((heures / 10) + '0');
			_putchar((heures % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}
}
