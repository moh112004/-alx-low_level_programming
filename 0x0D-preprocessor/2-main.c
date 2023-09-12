#include <stdio.h>

/**
 * main - prints the name of the file wich was compiled from
 *
 * Return: returns everything worked ok
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
