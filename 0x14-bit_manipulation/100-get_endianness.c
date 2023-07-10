#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: if big endian (0), otherwise (1) if little endian.
 */

int get_endianness(void)
{
	unsigned int number = 1;
	unsigned char *b = (unsigned char *) &number;

	if (*b == 1)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
