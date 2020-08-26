#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num, valor;
    int *p;
    num = 10;
    p = &num;
    valor = *p;
    printf("\n O conteudo do endereco apontado por p eh: %d\n\n", *p);
    printf("\n O endereco para onde o ponteiro p aponta eh: %p\n\n", p);
    printf("\n O conteudo do valor eh: %d\n\n", valor);
    return 0;
}