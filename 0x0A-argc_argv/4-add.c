#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - A program that adds all integer arguments and returns the sum.
 *
 * @argc: Number of arguments.
 * @argv: Array name.
 *
 * Return: 1 if passed arugment is not an integer, otherwise 0.
 */

int main(int argc, char *argv[])
{
	int i, j, len, sum;
	char *p;

	if (argc < 2)
		printf("0\n");

	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			p = argv[i];
			len = strlen(p);

			for (j = 0 ; j < len; j++)
			{
				if (isdigit(*(p + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}

			printf("%d\n", sum);
		}
		return (0);
}

