#include <stdio.h>

int main(void)
{
    char una_letra = 'z';
    printf("%lu\n", sizeof(una_letra));

    int *un_ptr_de_entero = &una_letra;

    printf("%c\n", una_letra)
    return 0;
}
