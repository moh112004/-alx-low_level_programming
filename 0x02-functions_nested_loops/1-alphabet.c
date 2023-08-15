#include "main.h"

/*
* print_alphabet - prints alphabet in lower case from a to z
* main - runs print_alphabet
* prints new line
* return 0
*/
void print_alphabet() {
for (int a = 97; a <= 122; a++) {
_putchar(a);
}
_putchar('\n');  
}
int main() {
print_alphabet();
return 0;
}
