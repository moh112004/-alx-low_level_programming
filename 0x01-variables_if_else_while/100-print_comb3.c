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
for (a = 48 ; a < 58 ; a++)
{
for (b = 49 ; b < 58 ; b++)
{
if (a == b || a > b) 
{
continue;
}
putchar(a);
putchar(b);
if (a == 56 && b == 57) 
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
