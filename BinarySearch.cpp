#include "BinarySearch.h"

BST_Node::BST_Node(int val){
    value = val;
    leftChild = NULL;
    rightChild = NULL;
}

BST::BST(){
    root = NULL;
}

BST_Node* BST::insert(BST_Node* node, int value)
{
    if(node == NULL) {
        return new BST_Node(value);
    }

    if(value < node->value) {
        node->leftChild = insert(node->leftChild, value);
    }
    else {
        node->rightChild = insert(node->rightChild, value);
    }
    
    return node;
}

void BST::insert(int value)
{
    root = insert(root, value);
}

