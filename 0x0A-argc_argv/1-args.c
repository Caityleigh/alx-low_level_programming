#include <stdio.h>

/**
 * main - Prints out all of the arguments passed to it.
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = 0;

	return (0);
}
