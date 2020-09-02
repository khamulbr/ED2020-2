#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    float *p, valor=100;

    printf("\n O endereco para onde o ponteiro p aponta eh: %p\n\n", p);

    p = 0x2000;

    printf("\n O endereco para onde o ponteiro p aponta eh: %p\n\n", p);

    p = &valor;

    printf("\n O endereco para onde o ponteiro p aponta eh: %p\n\n", p);

    valor++;

    printf("\n O valor eh: %f\n\n", valor);

    (*p)++;

    printf("\n O valor eh: %f\n\n", valor);

    printf("o tamanho de um int eh: %d\n",sizeof(int));
    printf("o tamanho de um float eh: %d\n",sizeof(float));
    printf("o tamanho de um char eh: %d\n",sizeof(char));
    printf("o tamanho de um bool eh: %d\n",sizeof(bool));
    printf("o tamanho de um double eh: %d\n",sizeof(double));
}