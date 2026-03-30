#include "BinarySearch.h"

BST_Node::BST_Node(int val){
    value = val;
    leftChild = nullptr;
    rightChild = nullptr;
}

BST::BST(){
    root = nullptr;
}

BST_Node* BST::insert(BST_Node* node, int value)
{
    if(node == nullptr) {
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

