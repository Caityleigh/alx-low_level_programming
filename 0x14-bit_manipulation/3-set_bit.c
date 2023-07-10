#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - A function that sets the value of a bit to 1
 * at a given box.
 *
 * @n: The pointer to an unsigned long int variable in which you want
 * to set its bit at an index to 1.
 * @index: The index of the bit that you want to set to 1.
 *
 * Return: If succesfull (1), otherwise (-1) if Error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= mask;
	return (1);
}
