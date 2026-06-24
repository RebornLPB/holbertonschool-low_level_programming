#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - entry point
*
* Description: Print every numbers of base 16 followed by ", ".
* Return: Always 0 (Success)
*/

int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
