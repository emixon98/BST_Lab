# BST_Lab
Binary Search Tree Lab CISC187 

## Task 1 BST Diagram of insertion in order of [1, 5, 9, 2, 4, 10, 6, 3, 8].

## Task 2 Max number of steps to search for a value in a well-balanced BST of 1000 Values.
Searching within a balanced BST is O(logN) where N is the number of elements. In which case this value comes close to 9.96... or approximately 10 max steps.
## Task 3 An algortihm that finds the greatest value within a BST (Pseudocode)
It is safe to assume that the greatest value resides at the lowest right node, continual traversal in that directions should yield our desired value. We start off at our root node, it is important, much like linked list, to treat elements as nodes and not values. The node contains both the value and pointers to children, so we should make sure to use appropriate naming for our calls.
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
