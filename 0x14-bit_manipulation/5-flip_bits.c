#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - A function that returns the number of bits
 * you will need to flip to get from one number to another.
 *
 * @n: Starting Number.
 * @m: Target Number.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_res;
	unsigned int i = 0;

	xor_res = n ^ m;

	while (xor_res != 0)
	{
		i += xor_res & 1;
		xor_res >>= 1;
	}

	return (i);
}
