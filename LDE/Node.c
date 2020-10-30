#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

void cria(LDE *lista){
    lista->inicio = NULL;
    lista->fim = NULL;
}

void insereInicio(LDE** lista, int valor){
    No* novoNo = (No*) malloc(sizeof(No));
    novoNo->valor = valor;

    if(*lista == NULL){
        novoNo->anterior = NULL;
        novoNo->proximo = NULL;
    } else {
        novoNo->proximo = *lista;
        novoNo->anterior = NULL;
        (*lista)->anterior = novoNo;
    }
    *lista = novoNo;
}

void imprime(LDE* lista) {
    No* atual = lista;
    if (atual != NULL)
        printf("\nNossa Lista Duplamente encadeada estah assim:\n");
    while( atual != NULL){
        printf("valor: %d\n", atual->valor);
        atual = atual->proximo;
    }
}



