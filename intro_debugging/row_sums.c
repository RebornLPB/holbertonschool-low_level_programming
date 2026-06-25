#include <stdio.h>

/**
 * row_sum - Calculates the sum of a specific row in a multiplication table.
 * @row: The current row number.
 * @cols: The total number of columns.
 *
 * Return: The sum of the elements in the specified row.
 */

int row_sum(int row, int cols)
{
	int c;
	int sum = 0;

	for (c = 1; c <= cols; c++)
		sum += row * c;

	return (sum);
}

/**
 * total_sum - Calculates the grand total of the entire multiplication table.
 * @rows: The total number of rows.
 * @cols: The total number of columns.
 *
 * Return: The total sum of all multiplication results.
 */

int total_sum(int rows, int cols)
{
	int r;
	int total = 0;

	for (r = 1; r <= rows; r++)
	{
		total += row_sum(r, cols);
	}

	return (total);
}

/* -- DO NOT Modify the code below this line -- */

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	printf("%d\n", total_sum(3, 3));
	return (0);
}
