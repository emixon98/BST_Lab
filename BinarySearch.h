#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

#include <iostream>
using namespace std;


struct BST_Node{
    int value;
    BST_Node* leftChild;
    BST_Node* rightChild;
    BST_Node(int val);
};

class BST{
    private:
        BST_Node* root;
        BST_Node* insert(BST_Node* node, int val);

    public:
        BST();
        void insert(int val);
};

#endif