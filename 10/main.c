#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main()
{
    Node *raiz = NULL;
    raiz = inserir(raiz, 25);
    inserir(raiz, 22);
    inserir(raiz, 40);
    inserir(raiz, 30);
    inserir(raiz, 45);
    inserir(raiz, 27);
    inserir(raiz, 20);

    inOrder(raiz);

    return 0;
}
