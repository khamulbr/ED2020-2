#include <stdio.h>
#include <stdlib.h>
#include "LDE.h"

void insereInicio(No** lista, int valor){
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

void imprime(No* lista) {
    if (lista != NULL) {
        No* atual = lista;
        printf("\nNossa Lista Duplamente encadeada estah assim:\n");
        while( atual != NULL){
            printf("valor: %d -> ", atual->valor);
            atual = atual->proximo;
        }
    } else {
        printf("\nNossa Lista Duplamente encadeada estah vazia:\n");
    }
}
