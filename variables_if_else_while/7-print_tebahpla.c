#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - entry point
*
* Description: Print every letter of the alphabet in reverse.
* Return: Always 0 (Success)
*/

int main(void)
{
	char lettre;

	for (lettre = 'z'; lettre >= 'a'; lettre--)
	{
		putchar(lettre);
	}
	putchar('\n');
	return (0);
}
