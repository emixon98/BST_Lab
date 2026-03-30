# BST_Lab
Binary Search Tree Lab CISC187 

## Task 1 BST Diagram of insertion in order of [1, 5, 9, 2, 4, 10, 6, 3, 8].

## Task 2 Max number of steps to search for a value in a well-balanced BST of 1000 Values.
Searching within a balanced BST is O(logN) where N is the number of elements and we use log base 2 as every comparison removes half the tree from further searching. In which case this value comes close to 9.96... or approximately 10 max steps.
## Task 3 An algortihm that finds the greatest value within a BST (Pseudocode)
It is safe to assume that the greatest value resides at the rightmost node, continual traversal in that direction should yield our desired value. We start off at our root node, it is important, much like linked list, to treat elements as nodes and not values. The node contains both the value and pointers to children, so we should make sure to use appropriate naming for our calls.
```
function findMax(root){
    if root is None
        return None
    current = root
    while current.rightChild is not None
        current = current.rightChild
    
    return current.value
}
```

## Task 4  Insertion operation of array from task 1
Insertion Logic using a similar node structure to LinkedList assignment
```cpp
#include "BinarySearch.h"
//Node with both its own value and children/descendants
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
    //new node creation if @ empty pos
    if(node == nullptr) {
        return new BST_Node(value);
    }
    //left subtree insertion
    if(value < node->value) {
        node->leftChild = insert(node->leftChild, value);
    } 
    // right subtree insertion
    else {
        node->rightChild = insert(node->rightChild, value);
    }
    
    return node;
}

void BST::insert(int value)
{
    root = insert(root, value);
}

```
Use in main.cpp
```cpp
#include "BinarySearch.h"

int main(){

    int arr[] = {1, 5, 9, 2, 4, 10, 6, 3, 8};
    int n = sizeof(arr)/sizeof(arr[0]); //simplify int type size to element count

    BST testTree;
    //call defined insertion function until all element inserted
    for(int i = 0; i < n; i++){
        testTree.insert(arr[i]);
    }

    return 0;
}
```