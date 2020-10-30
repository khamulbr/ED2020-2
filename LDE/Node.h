#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

typedef struct no {
    int valor;               // 4 bytes
    struct no* anterior;
    struct no* proximo;   // 4 bytes
} No;

typedef struct listaDuplamenteEncadeada {
    No* inicio;
    No* fim;
} LDE;

void cria(LDE* lista);

void insereInicio(LDE** lista, int valor);

void imprime(LDE* lista);


#endif // NODE_H_INCLUDED
