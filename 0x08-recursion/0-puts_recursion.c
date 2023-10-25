#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: string
 a*
 * Return: return  On success 1 else returns -1.
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
