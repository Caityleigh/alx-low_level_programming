#include "main.h"
#include <stdio.h>

/**
 * set_bit - A function that sets the value of a bit to 1.
 *
 * @n: The pointer to our bits.
 * @index: The index which sets the value.
 *
 * Return: 1 if Success, otherwise -1 if Error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n ^= (1 << index);

	return (1);
}
