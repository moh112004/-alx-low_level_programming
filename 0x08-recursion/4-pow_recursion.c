#include "main.h"

/**
 * _pow_recursion - raises x to the power of y.
 * @x: The number to be powered.
 * @y: The power.
 *
 * Return: Returns x powered by y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
