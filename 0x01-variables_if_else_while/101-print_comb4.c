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
int b;
int c;
for (a = 48 ; a < 58 ; a++)
{
for (b = 49; b < 58; b++)
{
for (c = 50; c < 58; c++)
{
if (a == b || b == c || a > b || b > c)
{
continue;
}
putchar (a);
putchar (b);
putchar (c);
if (a == 55 && b == 56 && c == 57)
{
continue;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
