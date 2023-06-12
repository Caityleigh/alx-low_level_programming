#include <stdio.h>

/**
 * main - Prints out all the arguments its received.
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}


	return (0);
}
