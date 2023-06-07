#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: String to be printed, but reversed.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\n')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	_print_rev_recursion("\nColton Walker");
	return (0);
}
