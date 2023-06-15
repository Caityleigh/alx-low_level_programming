#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc.
 *
 * @nmemb: Amount of elements.
 * @size: byte size of the elements in the array.
 *
 * Return: A pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *f;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	f = mem;

	for (index = 0; index < (size * nmemb); index++)
		f[index] = '\0';

	return (mem);
}


