//
// Created by olcia on 21.11.2019.
//

#include <iostream>
constexpr int size = 10;

using namespace std;

void print(int arr[], int s){
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void sort(int arr[]){

    int min, pos;

    for(int i = 0; i < size; i++){
        min = arr[i];
        pos = i;
        for(int j = i - 1; j >= 0; j--){
            if(arr[j] > min){
                arr[j+1] = arr[j];
                pos = j;
            }
        }
        arr[pos] = min;
    }
}


int main() {
    int arr[size] = {6, 5, 6, 2, 8, 1, 4, 6, 7, 6};
    sort(arr);
    print(arr, size);

    return 0;
}