#include <stdio.h>

/**
 * main - prints all alphabet in lowercase from z to a
 * followed by a new line
 * Return: always 0
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
