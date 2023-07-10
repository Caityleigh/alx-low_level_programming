#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - Prints a binary representation of a number given
 * as input.
 *
 * @n: The number that is given as a parameter to be checked so that
 * it may be converted into its binary representation.
 *
 * Return: The binary representation of (n).
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
        int i = 1;

	if (n == 0)
	{
		printf("0");
		return;
	}


	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			i = 0;
			printf("1");
		}

		else if (!i)
			printf("0");

		mask >>= 1;
	}
}
