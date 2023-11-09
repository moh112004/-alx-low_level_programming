#include <stdio.h>
/**
 * main - Prints its name followed by a new line
 * @argc: The number of the command line arguments
 * @argv: An array that is contains the
 * program command line arguments
 * Return: Returns 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
