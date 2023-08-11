#include <stdio.h>

/**
 * main - prints single digits between 0 and 10
 * prints alphabet from a to f
 * after that prints new line
 * Return: always 0
 */
int main(void)
{
char a;
for (a=48; a<58; a++)
	putchar(a);
for (a = 'a'; a <= 'f'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
