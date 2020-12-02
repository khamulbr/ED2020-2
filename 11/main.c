#include <stdio.h>
#include <stdlib.h>
#include "AVLNode.h"

AvlNode *insertElement(AvlNode *root) {
    int valor;
    printf("Informe o valor");
    scanf("%d", &valor);
    root = insertInTree(root, valor);
    return root;
}

void removeElement(AvlNode *root) {
}

void printTree(AvlNode *root) {
    preOrder(root);
}

void menu() {
    AvlNode *root = NULL;

    int opcao = 1;
    while(opcao != 0){
        printf("\n1) Inserir elemento na arvore\n");
        printf("2) Remover elemento da arvore\n");
        printf("3) Imprimir a arvore\n");
        printf("0) Sair\n");
        scanf("%d", &opcao);
        switch(opcao){
            case 1: root=insertElement(root); break;
            case 2: removeElement(root); break;
            case 3: printTree(root);
        }
    }

}

int main()
{
  menu();
  return 0;
}
