#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

int main()
{
    // LISTA CRIADA VAZIA
    Node* head = cria();
    head->info = 0;
    head->proximo = NULL;

    adicionaAoFinal(head, 1);
    adicionaAoFinal(head, 2);
    adicionaAoFinal(head, 3);
    adicionaAoFinal(head, 4);
    adicionaAoFinal(head, 5);

    adicionaAoInicio(head, 6);

    imprimir(head);

    printf("removi o valor %d da lista\n", removeDoFinal(head));

    imprimir(head);

    printf("removi o valor %d da lista\n", removeDoFinal(head));
    printf("removi o valor %d da lista\n", removeDoFinal(head));
    printf("removi o valor %d da lista\n", removeDoFinal(head));
    printf("removi o valor %d da lista\n", removeDoFinal(head));
    printf("removi o valor %d da lista\n", removeDoFinal(head));
    imprimir(head);

    printf("removi o valor %d da lista\n", removeDoFinal(head));
    adicionaAoFinal(head, 7);
    imprimir(head);

    return 0;
}
