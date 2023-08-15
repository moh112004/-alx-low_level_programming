#include <stdio.h>

/*
* main - prints "_putchar"
* prints new line
* retur 0
*/
int main( void ){
    char a[] = "_putchar";
    
   for (int x = 0 ; x < 8 ; x++){
            putchar(a[x]);
   }
   putchar('\n');
    
    return 0;
}
