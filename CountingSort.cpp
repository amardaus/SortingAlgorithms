//
// Created by olcia on 21.11.2019.
//

#include "CountingSort.h"

#include <iostream>
#include <algorithm>

constexpr int size = 10;

using namespace std;

void print(int arr[], int s){
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void sort(int arr[]){
    int max = *(std::max_element(arr, arr + size));
    max++;

    //print(arr, size);

    int* count = new int[max];
    for(int i = 0; i < size; i++){
        count[arr[i]]++;
    }

    for(int i = 0; i < max; i++){
        count[i+1] += count[i];
    }

    //print(count, max);

    for(int i = max - 1; i > 0; i--){
        count[i] = count[i-1];
    }
    count[0] = 0;

    //print(count, max);


    int* res = new int[size];

    for(int i = 0; i < size; i++){
        res[count[arr[i]]] = arr[i];
        count[arr[i]]++;
    }
    //print(res, size);

    for(int i = 0; i < size; i++){
        arr[i] = res[i];
    }

    return res;
}


int main() {
    int arr[size] = {6, 5, 6, 2, 8, 1, 4, 6, 7, 6};
    sort(arr);
    print(arr, size);

    return 0;
}