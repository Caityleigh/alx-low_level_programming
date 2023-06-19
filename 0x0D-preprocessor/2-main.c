#include <stdio.h>

/**
 * main - Prints the name of the file it's compiled from.
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
