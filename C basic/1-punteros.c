#include <stdio.h>

int main() {
    int a = 10;
    int *pointer_a = &a;

    printf("Valor de del puntero: %p\n", pointer_a);
    printf("Valor de a donde apunta  el puntero: %i\n", *pointer_a);
}
