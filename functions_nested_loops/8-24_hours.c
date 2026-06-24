#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 * 
 * Description: Prints every minute starting from 00:00 to 23:59.
 * Return: Day of Jack Bauer.
 */

int jack_bauer(void)
{
	int heures;
	int minutes;

	for (heures = '00'; heures <= '23'; heures++)
	{
		for (minutes = '00'; minutes <= '60'; minutes++)
		{
			_putchar(heures / 10);
			_putchar(heures % 10);
			_putchar(':');
			_putchar(minutes / 10);
			_putchar(minutes % 10);
		}
	}
	return (0);
}
