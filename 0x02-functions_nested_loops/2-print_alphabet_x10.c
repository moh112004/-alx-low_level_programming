#include <stdio.h>

/*
* main - prints "_putchar"
* prints new line
* retur 0
*/
void print_alphabet_x10() {
for (int x = 0 ; x < 10 ; x++){
    for (int a = 97; a <= 122; a++) {
        putchar(a);
    }
    putchar('\n');  
}
}

int main( void ){
    print_alphabet_x10();
    return 0;
}
