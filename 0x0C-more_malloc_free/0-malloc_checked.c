#include "main.h"

/**
 * malloc_checked - allocates memory area by using malloc
 * @b: the size of the memory area to be allocated
 * Return: returns a pointer to the address of the memory area
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
