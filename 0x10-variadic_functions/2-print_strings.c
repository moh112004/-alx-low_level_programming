#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: The string will be printed between the strings
 * @n: Number of strings passed to the function
 * Return: Returns no thing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int a;
	char *b;

	va_start(valist, n);

	for (a = 0; a < n; a++)
	{
		b = va_arg(valist, char *);
		if (b)
			printf("%s", b);
		else
			printf("(nil)");
		if (a < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
