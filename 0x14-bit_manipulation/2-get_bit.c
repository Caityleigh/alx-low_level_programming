#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given
 * index.
 *
 * @n: The number from which the bit value is retrieved.
 * @index: The index of the bit you want to retrieve.
 *
 * Return: Value of the bit index, otherwise (-1) if Error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}

