#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

Node* cria() {
    Node* cabeca = NULL;
    cabeca = (Node*) malloc(sizeof(Node));
    if (cabeca == NULL) {
        return 1;
    }
    return cabeca;
}

void adicionaAoInicio(Node* cabeca, int valor) {
    // CRIA NOVO NÓ
    Node* novoNodo = cria();
    novoNodo->info = valor;
    novoNodo->proximo = cabeca;

    cabeca = novoNodo;
}

void adicionaAoFinal(Node* cabeca, int valor) {
    // PERCORRE ATÉ O FINAL
    Node* atual = cabeca;
    while( atual->proximo != NULL){
        atual = atual->proximo;
    }

    // CRIA NOVO NÓ
    Node* novoNodo = cria();
    novoNodo->info = valor;
    novoNodo->proximo = NULL;

    // SETA O NOVO NÓ COMO ÚLTIMO
    atual->proximo = novoNodo;
}

int removeDoFinal(Node* cabeca){
    int valorRemovido = 0;
    // VERIFICA SE TEM ALGO NA LISTA
    if (cabeca->proximo == NULL) {
        printf("o proximo de cabeca eh %p\n", cabeca->proximo);
        valorRemovido = cabeca->info;
        cabeca = NULL;
        free(cabeca);
        return valorRemovido;
    }

    // PERCORRE ATÉ O FINAL
    Node* atual = cabeca;
    while( atual->proximo->proximo != NULL){
        atual = atual->proximo;
    }

    valorRemovido = atual->proximo->info;
    free(atual->proximo);
    atual->proximo = NULL;
    return valorRemovido;
}


void imprimir(Node* cabeca){
    Node* atual = cabeca;
    if (atual != NULL)
        printf("\nNossa Lista estah assim:\n");
    while( atual != NULL){
        printf("valor: %d\n", atual->info);
        atual = atual->proximo;
    }
}
