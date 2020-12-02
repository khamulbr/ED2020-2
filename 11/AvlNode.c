#include <stdio.h>
#include <stdlib.h>
#include "AVLNode.h"

AvlNode *newNode(int value) {
    AvlNode *node = (AvlNode*) malloc(sizeof(AvlNode));
    node->value = value;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return(node);
}

int height(AvlNode *node){
    if (node == NULL)
        return 0;
    return node->height;
}

int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int getBalance(AvlNode *node){
    if (node == NULL)
        return 0;
    return height(node->left) - height(node->right);
}

AvlNode *rotateToRight(AvlNode *node) {
    AvlNode *nodeLeftSon = node->left;
    AvlNode *nodeLeftRightSon = nodeLeftSon->right;

    // rotacao
    nodeLeftSon->right = node;
    node->left = nodeLeftRightSon;

    // alturas
    node->height = 1 + max(height(node->left), height(node->right));
    nodeLeftSon->height = 1 + max(height(nodeLeftSon->left), height(nodeLeftSon->right));

    return nodeLeftSon;
}

AvlNode *rotateToLeft(AvlNode *node) {
    AvlNode *nodeRightSon = node->right;
    AvlNode *nodeRightLeftSon = nodeRightSon->left;

    // rotacao
    nodeRightSon->left = node;
    node->right = nodeRightLeftSon;

    // alturas
    node->height = 1 + max(height(node->left), height(node->right));
    nodeRightSon->height = 1 + max(height(nodeRightSon->left), height(nodeRightSon->right));

    return nodeRightSon;
}
AvlNode *insertInTree(AvlNode *node, int value) {
    if (node == NULL) {
        return (newNode(value));
    }

    if (value < node->value)
        node->left = insertInTree(node->left, value);
    else if (value > node->value)
        node->right = insertInTree(node->right, value);
    else
        return node;

    node->height = 1 + max(height(node->left), height(node->right));

    int balanceFactor = getBalance(node);

    // 4 cenarios

    // esq esq
    if (balanceFactor > 1 && value < node->left->value)
        return rotateToRight(node);

    // dir dir
    if (balanceFactor < - 1 && value > node->right->value)
        return rotateToLeft(node);

    // esq dir
    if (balanceFactor > 1 && value > node->left->value){
        node->left = rotateToLeft(node->left);
        return rotateToRight(node);
    }

    // dir esq
    if (balanceFactor < -1 && value < node->right->value){
        node->right = rotateToRight(node->right);
        return rotateToLeft(node);
    }

    return node;
}

void preOrder(AvlNode *node) {
    if  (node != NULL){
        printf("%d ", node->value);
        preOrder(node->left);
        preOrder(node->right);
    }
}
