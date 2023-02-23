#include "main.h"

/**
 * print_sqaure - Prints n sqaures according n number of times
 * @size: The number of sqaures/number of times
 * Return: empty
 */

void print_sqaure(int size)
{
	int x, y;

	if (size <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
	for (y = 0; y < size; y++)
	{
	putchar(35);
	}
	putchar('\n');
	}
	}
}
