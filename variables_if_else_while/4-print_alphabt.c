#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - entry point
*
* Description: Print alphabet without e & q.
* Return: Always 0 (Success)
*/

int main(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		if (lettre != 'e' && lettre != 'q')
		{
			putchar(lettre);
		}
	}
	putchar('\n');
	return (0);
}
