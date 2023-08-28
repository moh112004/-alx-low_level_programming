#include "main.h"

/**
* *_memcpy - copies c bytes from memorey area b
*  to momery area  a
*  @a: memory area bytes be cpoied to
*  @b: memory area bytes be copied from
*  @c: the number of bytes to copy
*  Return: pointer of a
*/
char *_memcpy(char *a, char *b, unsigned int c)
{
unsigned int i;

for ( i = 0; i < c; i++)
a[i] = b[i];
return (a);
}
