#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints the numbers 10 times
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y > 9)
	{
	putchar((y / 10) + '0');
	}
	putchar((y % 10) + '0');
	}
	putchar('\n');
	}
}
