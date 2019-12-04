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

void merge(int arr[], int left, int mid, int right){
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

void sort(int arr[]) {
    for(int part_size = 1; part_size <= size - 1; part_size *= 2) {
        for (int part_start = 0; part_start < size - 1; part_start += 2 * part_size) {
            int part_mid = part_start + part_size - 1;
            int part_end = part_start + 2 * part_size - 1;
            merge(arr, part_start, part_mid, part_end);
        }
    }
}


int main(){
    int arr[size] = {8, 5, 2, 3, 7, 1, 4, 6};
    sort(arr);
    print(arr);

    return 0;
}
