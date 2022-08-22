#include <stdio.h>

int main(void)
{
    int nombre_del_arreglo[10] = {4,5,6,7};

    printf("%d\n", nombre_del_arreglo[0]);

    int *mi_apuntador = &nombre_del_arreglo[0];

    printf("%d", *mi_apuntador);

    return 0;
}