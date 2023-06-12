#include <stdio.h>

/**
 * main - Prints out the arguments given in command line.
 * @argc: Agrument count.
 * @argv: Argument Vector.
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}

	return (0);
}
