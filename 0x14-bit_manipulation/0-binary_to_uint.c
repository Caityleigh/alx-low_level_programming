#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number represented
 * in a string, to an unsigned integer.
 *
 * @b: A pointer to a given string that represents binary numbers.
 *
 * Return: The converted number, 0 if there is one or more chars
 * in the string that is not binary, otherwise NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, bit_value = 1;
	int length = 0, index;

	if (b == NULL)
	{
		return (0);
	}

	while (b[length] != '\0')
	{
		length++;
	}


	for (index = length - 1; index >= 0; index--)
	{
		if (b[index] == '0')
			bit_value <<= 1;

		else if (b[index] == '1')
		{
			res += bit_value;
			bit_value <<= 1;
		}

		else
			return (0);
	}
	return (res);
}


