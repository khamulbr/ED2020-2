#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

typedef struct node {
    struct node *esq;
    int valor;
    struct node *dir;
} Node;

Node *criar(int valor);

Node *inserir(Node *raiz, int novoValor);

void inOrder(Node *raiz);

void buscar(int valorDesejado);

void remover(int valorDesejado);

#endif // NODE_H_INCLUDED
