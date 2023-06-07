#include "main.h"

/**
 * _puts_recursion - Prints a string.
 * @s: Pointer to the first character in a string.
 * Return: Always (0)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}

	else
		putchar(*s);
		_put_recursion(s + 1);
}
