#ifndef LDE_H_INCLUDED
#define LDE_H_INCLUDED

typedef struct no {
    int valor;               // 4 bytes
    struct no* anterior;
    struct no* proximo;   // 4 bytes
} No;

/* typedef struct listaDuplamenteEncadeada {
    No* inicio;
    No* fim;
} LDE;
*/

void insereInicio(No** lista, int valor);

void imprime(No* lista);

#endif // LDE_H_INCLUDED
