#include <stdio.h>
#include <stdlib.h>

int main()
{
    int filaCircular[6];
    int inicio = 0;
    int fim = 5;
    boolean chegouNoMaximo = true;

    // 0 1 2 3 4 5 fim+1 = inicio
         B C D E F

    // 0 1 2 3 4 5 fim+1 = inicio
       A B   D E F

    // 0 1 2 3 4 5 inicio = 0 && fim = tamanho-1
       A B C D E _


    // 0 1 2 3 4 5 inicio = fim -> vazia


    enfileira('A');
    enfileira('B');
    enfileira('C');
    enfileira('D');
    enfileira('E');

    desenfileira() > A

    enfileira('F');


    printf("Hello world!\n");
    return 0;
}
