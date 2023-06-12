#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * isitNumeric - checks to see if a string is numeric.
 * @s: string checked
 * Return: True if numeric, or False if not.
 */

bool isitNumeric(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 48 || s[i] > 57)
		{
			return (false);
		}
	}
	return (true);
}


/**
 * main - Entry Point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 0; i < argc; i++)
	{
		if (!isitNumeric(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}


