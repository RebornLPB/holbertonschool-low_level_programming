#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - entry point
*
* Description: Print every letter of the alphabet with new line at the end
* Return: Always 0 (Success)
*/

int main(void)
{
	for (char lettre = 'a'; lettre <= 'z'; lettre++)
	{
		putchar(lettre);
	}
	putchar('\n');
	return (0);
}
