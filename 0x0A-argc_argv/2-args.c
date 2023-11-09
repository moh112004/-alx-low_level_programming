#include <stdio.h>
/**
 * main - Prints all arguments it receives
 * @argc: The number of the command line arguments
 * @argv: An array that contains the
 * program command line arguments
 * Return: Returns 0 on success
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
