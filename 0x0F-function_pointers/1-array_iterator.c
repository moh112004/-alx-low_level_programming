#include "function_pointers.h"

/**
 * array_iterator - Take a function as a
 * parameter and exeeceute it on all elements in an array
 * @array: Input integer array
 * @size: The size of the array
 * @action: A pointer to the function
 * Return: Returns no thing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && action)
		for (a = 0; a < size; a++)
			action(array[a]);
}
