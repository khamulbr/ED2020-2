#ifndef AVLNODE_H_INCLUDED
#define AVLNODE_H_INCLUDED

typedef struct avlnode {
    int value;
    struct avlnode *left;
    struct avlnode *right;
    int height;
} AvlNode;

AvlNode *insertInTree(AvlNode *node, int value);

void preOrder(AvlNode *node);

#endif // AVLNODE_H_INCLUDED
