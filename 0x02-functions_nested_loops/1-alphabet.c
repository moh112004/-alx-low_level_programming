#include "main.h"

/*
* print_alphabet - prints alphabet in lower case from a to z
* main - runs print_alphabet
* prints new line
* return 0
*/
void print_alphabet() {
char a = 'a';

while ( a <='z') {
_putchar(a);
  a++;
}
_putchar('\n');  
}
