#include "main.h"
#include <stdio.h>

/**
 * get_bit - A function that returns the value of a bit given in
 * the index.
 *
 * @n: The value given by the user.
 * @index: The index tha is provided by the user.
 *
 * Return: The value of the bit at the index, otherwise
 * -1 if Error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	if ((n & (1 << index)) == 0)
	{
		return (0);
	}

	return (1);
}
