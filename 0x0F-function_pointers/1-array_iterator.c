#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function runs a function on evrey element
 * in the array
 * @array: the array
 * @size: the size of the array
 * @action: the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    unsigned int x = 0;

    if(!array || !action)
        return;

    for (x = 0; x < size; x++)
        action(array[x]);
}
