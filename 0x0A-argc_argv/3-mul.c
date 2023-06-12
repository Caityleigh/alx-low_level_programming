#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers and prints the results.
 * @argc: argument count must be exactly 2 numbers.
 * @argv: argument vector
 *
 * Return: 0 on  success, 1 on failure
 */

int main(int argc, char *argv[])
{
	int num1, num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[1]);
		printf("%d\n", num1 * num2);
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
