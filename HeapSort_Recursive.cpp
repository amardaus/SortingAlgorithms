//
// Created by olcia on 23.11.2019.
//

#include <iostream>

void swap(int* arr, int a, int b){
    int c = arr[a];
    arr[a] = arr[b];
    arr[b] = c;
}

void heapify(int* arr, int i, int n){
    int root = i;
    int left = i*2+1;
    int right = i*2+2;

    if(arr[left] > arr[root] && left < n){
        root = left;
    }

    if(arr[right] > arr[root] && right < n){
        root = right;
    }

    if(root != i){
        swap(arr, i, root);
        heapify(arr, root, n);
    }
}


void sort(int* arr, int size){

    for(int i = (size/2)-1; i >= 0; i--){
        heapify(arr, i, size);
    }

    for(int i = size - 1; i >= 0; i--){
        swap(arr, 0, i);
        heapify(arr, 0, i);
    }

    for(int i = 0; i < size; i++){
        std::cout << arr[i] << ", ";
    }
    std::cout << std::endl;
}

int main() {
    int size = 10;
    int arr[] = {100, 20, 304, 4024, 546, 673, 928, 1, 1, 2};
    sort(arr, size);

    return 0;
}