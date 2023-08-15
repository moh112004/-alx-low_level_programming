#include <stdio.h>

/**
* print_alphabet_x10-prints alphabet in lower case ten times
* Return: 0
*/
void print_alphabet_x10(void)
{
int x = 0;
int a = 97;
while (x < 10)
{
while (a <= 122)
{
putchar (a);
a++;
}
putchar ('\n');
x++;
a = 97;
}
}
