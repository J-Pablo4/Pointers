#include <stdio.h>

int main(void) {
    int foo = 13;
    char bar = 'a'; // Tamaño: de 1 byte hasta 4 bytes
    printf("%d", foo);
    printf("%d", sizeof(foo));
    return 0;
}
