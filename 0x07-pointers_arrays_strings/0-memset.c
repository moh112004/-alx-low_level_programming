#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @a: memory area to be filled
 * @b: char to copy
 * @c: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *a, char b, unsigned int c)
{
	unsigned int x;

	for (x = 0; x < c; x++)
	{
		a[x] = b;
	}

	return (a);
}
