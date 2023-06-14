#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of characters, and
 * initializes it with a specific char.
 *
 * @size: size of the memory allocated in bytes.
 * @c: chars to be initialized.
 *
 * Return: a pointer to an array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (0);

	while (size--)
		array[size] = c;

	return (array);
}
