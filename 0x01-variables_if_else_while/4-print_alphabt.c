#include <stdio.h>

/**
 * main - prints the all alphabet in lowercase except e and q,
 * after that prints new line
 * Return: always 0
 */
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'e' || ch == 'q' ) {
continue;
}
putchar(ch);
}
putchar('\n');
return (0);
}
