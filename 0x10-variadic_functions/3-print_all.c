#include "variadic_functions.h"

/**
 * print_all - Prints every thing
 * @format: A list of many types of arguments
 * passed to the function
 * Return: Returns no thing
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int a = 0, b, c = 0;
	char *d;
	const char e[] = "cifs";

	va_start(valist, format);
	while (format && format[a])
	{
		b = 0;
		while (e[b])
		{
			if (format[a] == e[b] && c)
			{
				printf(", ");
				break;
			} b++;
		}
		switch (format[a])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), c = 1;
			break;
		case 's':
			d = va_arg(valist, char *), c = 1;
			if (!d)
			{
				printf("(nil)");
				break;
			}
			printf("%s", d);
			break;
		} a++;
	}
	printf("\n"), va_end(valist);
}
