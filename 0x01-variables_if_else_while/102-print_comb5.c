#include <stdio.h>

/**
 * main - prints digits tow tow from 00 to 99
 * prints white space between tow tow integers
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
int d;
  
for (a = 48 ; a < 58 ; a++)
{
for (b = 48 ; b < 58 ; b++)
{
for (c = 48 ; c < 58 ; c++)
{
for (d = 48 ; d < 58 ; d++)
{
if (a == c && b == d)
continue;
if (a > c)
continue;
if (a == c)
if (b > d)
continue;
putchar (a);
putchar (b);
putchar (' ');
putchar (c);
putchar (d);
if (a == 57 && b == 56 && c == 57 && d == 57)
continue;
putchar (',');
putchar (' ');
}
}
}
}
putchar ('\n');
return (0);
}
