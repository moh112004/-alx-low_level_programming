#include "dog.h"

/**
 * free_dog - frees the allocated memory
 * @d: a pointer to the memory area to be free
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
