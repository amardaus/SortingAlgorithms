//
// Created by olcia on 21.11.2019.
//

#include "RadixSort.h"
#include <iostream>
constexpr int size = 8;

using namespace std;

void print(int* arr, int s){
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int find_max(int* arr)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}

void radixsort(int arr[], int exp){

    int res[size] = {};
    int count[10] = {};

    for(int i = 0; i < size; i++) {
        //cout << (arr[i]/exp)%10 << " ";
        count[(arr[i]/exp)%10]++;
    }

    for(int i = 1; i < 10; i++) {
        count[i] += count[i-1];
    }

    for(int i = 9; i > 0; i--){
        count[i] = count[i-1];
    }
    count[0] = 0;

    for(int i = 0; i < size; i++) {
        res[count[(arr[i]/exp)%10]] = arr[i];
        count[(arr[i]/exp)%10]++;
    }

    for(int i = 0; i < size; i++){
        arr[i] = res[i];
    }

    //cout << "---- ";
    //print(res, size);
}

void sort(int arr[]){

    int max = find_max(arr);
    for(int exp = 1; max/exp > 0; exp*=10){
        radixsort(arr, exp);
    }

    print(arr, size);

}



    //cout << e << endl;
    //https://www.geeksforgeeks.org/radix-sort/


int main(){
    int arr[size] = {111, 222, 111, 22, 333, 312, 2, 1};
    sort(arr);



    return 0;
}