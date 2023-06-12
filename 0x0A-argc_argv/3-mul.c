#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 *
 * @argc: argument count must contain 2 arguments.
 * @argv: argument vector
 *
 * Return: 0 if success, or 1 if error.
 */

int main(int argc, char *argv[])
{
	int num1, num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[argc - 1]);
		num2 = atoi(argv[argc - 1]);
		argv[0] = 0;

		printf("%d\n", num1 * num2);
		return (0);
	}

	else
		printf("Error\n");

	return (1);
}
