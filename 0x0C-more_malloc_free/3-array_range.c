#include "main.h"

/**
* array_range - creates an array contain some integers
* @min: the smallest number in the array
* @max: the lagrest value in the array
* Return: returns a pointer to the address of the memory area
*/

int *array_range(int min, int max)
{
	int *area;
	int a, b = 0;

	if (min > max)
		return (NULL);
	area = malloc(sizeof(*area) * ((max - min) + 1));
	if (area != NULL)
	{
		for (a = min; a <= max; a++)
		{
			area[b] = a;
			b++;
		}
		return (area);
	}
	else
		return (NULL);

}

