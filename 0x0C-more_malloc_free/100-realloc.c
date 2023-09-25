#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - a function that is reallcate memory.
 * @ptr: a pointer to allocated area content.
 * @old_size: the old size of allocated area.
 * @new_size: the new size of allocated area.
 * Return: returns a pointer to allocated area.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	unsigned int b = 0;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	a = malloc(new_size);
	if (!a)
		return (NULL);
	if (new_size < old_size)
		for (b = 0; b < new_size; b++)
			a[b] = ptr[b];
	if (new_size > old_size)
		for (b = 0; b < old_size; b++)
			a[b] = ptr[b];
	free(ptr);
	return (a);
}
