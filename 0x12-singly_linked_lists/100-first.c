#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a sentence before the main
 * the function is excuted
 */
void first(void)
{
	printf("You're beat! and yet, you must allow, ");
	printf("bore my house upon my back!\n");
}
