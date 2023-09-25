#include <stdlib.h>
#include "main.h"

/**
 * *_calloc: allocate memory for an array
 * @nmemb: count of elements
 * @size: the size of each elemnt
 * Return: returns the adress of the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < nmemb * size; b++)
		a[b] = 0;
	return (a);
}
