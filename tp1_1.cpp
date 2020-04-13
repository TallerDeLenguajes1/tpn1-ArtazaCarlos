#include <stdio.h>

int main()
{
    int num = 23;
    int* p_num = &num;
    printf("a) el contenido del puntero: %d\n", *p_num);
    printf("b) la dirección de memoria almacenada por el puntero: %p\n", p_num);
    printf("c) la dirección de memoria de la variable: %p\n", &num);
    printf("d) la dirección de de memoria del puntero: %p\n", &p_num);
    printf("e) el tamaño de memoria utilizado por esa variable: %d\n", sizeof(p_num));
    return 0;
}
