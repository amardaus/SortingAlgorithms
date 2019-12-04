//
// Created by olcia on 29.11.2019.
//

#include <iostream>

using namespace std;
constexpr int size = 8;

void print(int arr[]){
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void merge(int arr[], int left, int right, int mid){
    int left_len = mid-left+1;
    int right_len = right-mid;
    int left_arr[left_len];
    int right_arr[right_len];

    for(int i = 0; i < left_len; i++){
        left_arr[i] = arr[left + i];
    }

    for(int i = 0; i < right_len; i++){
        right_arr[i] = arr[mid + i + 1];
    }

    int li = 0, ri = 0, ai = left;
    while(li < left_len && ri < right_len){
        if(left_arr[li] < right_arr[ri]){
            arr[ai] = left_arr[li];
            li++;
        }
        else{
            arr[ai] = right_arr[ri];
            ri++;
        }
        ai++;
    }

    while(li < left_len){
        arr[ai] = left_arr[li];
        li++;
        ai++;
    }

    while(ri < right_len){
        arr[ai] = right_arr[ri];
        ri++;
        ai++;
    }

    //cout << "l:" << mid+1 << " r:" << right-mid << endl;
}

void sort(int arr[], int left, int right) {
    if(left < right){
        int mid = (left+right)/2;

        sort(arr, left, mid);
        sort(arr, mid+1, right);
        merge(arr, left, right, mid);
    }
}


int main(){
    int arr[size] = {111, 222, 111, 22, 333, 312, 2, 1};
    sort(arr, 0, size-1);
    print(arr);

    return 0;
}
