#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - entry point
*
* Description: Print lowercase + uppercase alphabet.
* Return: Always 0 (Success)
*/

int main(void)
{
	char letter = 'a';
	int mode = 0;

	while (mode < 2)
	{
		putchar(letter);
		letter++;
		if (mode == 0 && letter > 'z')
		{
			letter = "A";
			mode = 1;
		}
		else if (mode == 1 && letter > 'Z')
		{
			mode = 2;
		}
	}
	putchar('\n');
	return (0);
}
