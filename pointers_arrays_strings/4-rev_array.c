#include "main.h"

/**
 * reverse_array - Reverses the content of an integer array
 * @a: The array to reverse
 * @n: Number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
