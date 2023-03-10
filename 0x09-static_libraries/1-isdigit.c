#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks for a digit.
 * @c: Character being checked
 * Return: 1 if c is a digit, otherwise returns 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
