#include "BinarySearch.h"

int main(){

    int arr[] = {1, 5, 9, 2, 4, 10, 6, 3, 8};
    int n = sizeof(arr)/sizeof(arr[0]); //simplify int type size 

    BST testTree;

    for(int i = 0; i < n; i++){
        testTree.insert(arr[i]);
    }
    //maybe include a print statement to verify it works..
    return 0;
}

