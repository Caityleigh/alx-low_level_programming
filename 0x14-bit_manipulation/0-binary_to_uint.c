#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number
 * to an unsigned integer.
 *
 * @b: A pointer to a string of characters.
 *
 * Return: The converted number, or 0 if there is one or
 * more chars in the string that is not 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (index = 0; b[index] != '0'; index++)
	{
		if (b[index] < '0' || b[index] >  '1')
			return (0);

		result = 2 * result + (b[index] - '0');
	}

	return (result);
}

