#include <stdio.h>

/**
 * main - prints digits from 0 to 9
 * prints ,
 * prints white space
 * after that prints new line
 * Return: always 0
 */
int main(void)
{
int a;
for (a = 48; a < 58; a++)
{
putchar(a);
if (a != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
