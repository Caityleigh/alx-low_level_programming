#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints results of simple operations.
 *
 * @argc: Argument count.
 * @argv: Argument Vector.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int result;
	int (*calculator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2] == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	calculator = get_op_func(argv[2]);

	if (calculator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = calculator(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
