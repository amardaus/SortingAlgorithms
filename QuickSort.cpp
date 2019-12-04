//
// Created by olcia on 23.11.2019.
//

#include <iostream>

using namespace std;
constexpr int size = 8;

void print(int arr[]){
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void sort(int arr[], int left, int right){

    int pivot = arr[(left+right)/2];
    int i = left;
    int j = right;

    while(i <= j){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i <= j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    if(left < j){
        sort(arr, left, j);
    }
    if(i < right){
        sort(arr, i, right);
    }
}


int main(){
    int arr[size] = {111, 222, 111, 22, 333, 312, 2, 1};
    sort(arr, 0, size-1);
    print(arr);

    return 0;
}
