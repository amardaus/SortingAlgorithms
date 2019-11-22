//
// Created by olcia on 21.11.2019.
//

#include "BubbleSort.h"
#include <iostream>
#include <array>

constexpr int size = 10;

using namespace std;

void print(array<int, size> arr, int s){
    for(auto it = arr.begin(); it != arr.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

array<int, size> sort(array<int, size> arr){

    bool swapped;
    for(auto it = arr.begin(); it != arr.end(); it++){
        swapped = false;
        for(auto it2 = arr.begin(); it2 != arr.end(); it2++){
            if(*it2 > *it){
                iter_swap(it, it2);
                swapped = true;
            }
        }
        if(!swapped) break;
    }

    return arr;
}


int main() {
    array<int, size> arr = {6, 5, 6, 2, 8, 1, 4, 6, 7, 6};
    arr = sort(arr);
    print(arr, size);

    return 0;
}