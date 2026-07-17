#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - entry point for simple calculator program
 * @argc: number of command line arguments
 * @argv: array of command line argument strings
 *
 * Description: Expects three arguments: two integers and an operator.
 *              Valid operators are +, -, *, /, and %.
 * Return: 0 on success, exits with status 98, 99, or 100 on error.
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = f(a, b);
	printf("%d\n", result);
	return (0);
}
