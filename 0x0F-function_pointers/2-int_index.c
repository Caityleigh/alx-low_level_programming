#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 *
 * @size: The number of elements in array.
 * @cmp: A pointer to the function used to compare values.
 * @array: Array of integers checked.
 *
 * Return: Index of elements for which cmp does not return 0.
 * return (-1) if no element matches, otherwise if size is less
 * or eqaul to 0 - return (-1).
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (cmp == NULL || array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
