//
// Created by olcia on 21.11.2019.
//

#include "SelectionSort.h"
#include <iostream>
#include <algorithm>
#include <array>

constexpr int size = 10;

using namespace std;

void print(array<int, size> arr, int s){
    for (auto it = arr.begin(); it != arr.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;
}

array<int, size> sort(array<int, size> arr){

    int i = 0;
    for(auto it = arr.begin(); it != arr.end(); it++){
        auto min = min_element(arr.begin() + i, arr.end());
        iter_swap(it, min);
        i++;
    }

    print(arr, size);
    return arr;
}


int main() {
    array<int, size> arr = {6, 5, 6, 2, 8, 1, 4, 6, 7, 6};
    sort(arr);

    return 0;
}
