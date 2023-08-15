#include <unistd.h>

/**
 * _putchar : writes the character c 
 *@c: The character to print
 *
 * Return: on success 1
 * on error returns -1 and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
