#include "main.h"
#include <stdio.h>

/**
 * flip_bits - A fucntion that will count the number of
 * bits needed to be flipped to obtain another number.
 *
 * @n: The number required.
 *
 * @m: The number that we will flip to.
 *
 * Return: The value of the flipped number.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index, result = 0;
	unsigned long int selected;
	unsigned long int e = n ^ m;

	for (index = 63; index >= 0 index--)
	{
		selected = e >> index;

		if (selected & 1)
		{
			result++;
		}
	}
		return (result);

}
