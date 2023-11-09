#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: Input integer array
 * @size: The size of the array
 * @cmp: A pointer to the function
 * that is will be used to compare values
 * Return: Returns the index of the first element for
 * which the cmp function does not return 0. If no elements matches,
 * return -1. If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (a = 0; a < size; a++)
			if (cmp(array[a]))
				return (a);
	}

	return (-1);
}
