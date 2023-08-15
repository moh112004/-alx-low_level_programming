#include <stdio.h>

/*
* main - prints "_putchar"
* prints new line
* retur 0
*/
void print_alphabet_x10() {
int x = 0 ;
int a = 97;
while ( x < 10 ){
while ( a <= 122) {
putchar(a);
}
putchar('\n'); 
a++;
}
x++;
}
