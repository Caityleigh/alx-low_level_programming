#include "main.h"
#include <stdio.h>

/**
 * get_endianness - A function that checks the endianness.
 *
 * Return: If big - then 0.
 * if little - then 1.
 */

int get_endianness(void)
{
	int n = 1;
	char *end;

	end = (char *)&n;

	if (*end == 1)
	{
		return (1);
	}

	return (0);
}
