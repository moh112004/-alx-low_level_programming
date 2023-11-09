#include <stdio.h>
/**
 * main - Prints the number of arguments passed into it
 * @argc: The number of the command line arguments
 * @argv: An array that is contains the
 * program command line arguments
 * Return: Returns 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
