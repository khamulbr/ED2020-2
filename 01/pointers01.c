#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //char *nome;
    int *ponteiro1, valor;
    printf("\n O endereco para onde o ponteiro p aponta eh: %p\n\n", ponteiro1);
    valor = 10;
    ponteiro1 = &valor;
    *ponteiro1 = valor;
    printf("\n O conteudo do endereco apontado por p eh: %d\n\n", *ponteiro1);
    printf("\n O endereco para onde o ponteiro p aponta eh: %p\n\n", ponteiro1);
    printf("\n O conteudo do valor eh: %d\n\n", valor);
    printf("\n O endereco para onde o ponteiro de valor aponta eh: %p\n\n", &valor);

    /* endereco = &ponteiro2;
     printf("\n O valor de endereco eh: %p\n\n", endereco);
     endereco = &ponteiro3;
     printf("\n O valor de endereco eh: %p\n\n", endereco);
     */
    return 0;
}