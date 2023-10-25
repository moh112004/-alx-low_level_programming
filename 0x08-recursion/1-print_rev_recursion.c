#include "main.h"

/**
 * _print_rev_recursion - Prints a reversed  string
 * @s: a string
 *
 * Return: return on success 1 else -1.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
