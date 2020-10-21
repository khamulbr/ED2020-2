#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

typedef struct node {
    int info;               // 4 bytes
    struct node* proximo;   // 4 bytes
} Node;

Node* cria();

void adicionaAoInicio(Node* head, int value);

void adicionaAoFinal(Node* head, int value);

int removeDoFinal(Node* head);

void imprimir(Node* head);

#endif // NODE_H_INCLUDED
