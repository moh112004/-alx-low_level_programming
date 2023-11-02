#include "main.h"

/**
* _calloc - allocate a memory area by using malloc
*@nmemb: the number of elements
*@size: the size of the memory area to allocate
*
*Return: returns a poiner to the address of the memory area
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem != NULL)
	{
		for (a = 0; a < (nmemb * size); a++)
			mem[a] = 0;
		return (mem);
	}
	else
		return (NULL);
}
