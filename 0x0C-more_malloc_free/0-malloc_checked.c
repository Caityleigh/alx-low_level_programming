#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - Allocates memory using malloc.
 *
 * @b: The memory allocated in bytes.
 *
 * Return: Pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	int *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
