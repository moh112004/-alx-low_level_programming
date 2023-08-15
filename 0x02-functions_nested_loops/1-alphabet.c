#include "main.h"

/*
* print_alphabet - prints alphabet in lower case from a to z
* main - runs print_alphabet
* prints new line
* return 0
*/
void print_alphabet (void) 
{
char c = 'a';

while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar ('\n');  
}
