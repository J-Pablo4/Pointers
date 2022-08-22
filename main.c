#include <stdio.h>

int main(void)
{
    int nombre_del_arreglo[10] = {4,5,6,7};

    /*
    printf("%d\n", nombre_del_arreglo[0]);

    printf("%d", *mi_apuntador);

     */

    int *mi_apuntador = nombre_del_arreglo; //sin &

    for (int i = 0; i < 10; ++i)
    {
        //printf("%d\n", nombre_del_arreglo[i]);

       //printf("En la direccion: %p tenemos el valor:", (mi_apuntador +i));
        printf("%d\n", *mi_apuntador);
        mi_apuntador++;
    }

    return 0;
}