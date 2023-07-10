#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit at an
 * index to 0.
 *
 * @n: A pointer to the bit at a given index.
 * @index: The index to set the value.
 *
 * Return: If Success (1), otherwise (-1) if Error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned int long) * 8))
	{
		return (-1);
	}

	*n &= ~(1 << index);

	return (1);
}
