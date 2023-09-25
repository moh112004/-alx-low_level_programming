#include <stdlib.h>
#include "main.h"

/**
 * *array_range - afunction that takes two integers and create
 *  an array of integers ordered from the minimum to the maximum.
 * @min: the minimum integer.
 * @max: the maximum integer.
 * Return: a pointer to the array.
 */

int *array_range(int min, int max)
{
	char *a;
	int b = 0;

	if (main > max)
		return (NULL);
	a = malloc(max - min + 1);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < max - min + 1; b++)
		a[b] = min + b;
	return (a);
}
