//
// Created by olcia on 23.11.2019.
//

#include "HeapSort.h"
#include <iostream>
#include <array>
constexpr int MAX_SIZE = 100;

class Heap{
private:
    int n = 0;
    int arr[MAX_SIZE];

    void heapify(int _n)
    {
        for(int i = 1; i < _n; i++){
            if(arr[i] > arr[(i-1)/2]){
                int child = i;
                while(arr[child] > arr[(child-1)/2]){
                    std::swap(arr[child], arr[(child-1)/2]  );
                    child = (child-1)/2;
                }
            }
        }
    }
public:
    void build(int a[], int _n){
        std::copy(a, a+_n, arr);
        n = _n;
    }

    void push(int x){
        arr[n] = x;
        n++;
    }

    int pop(){
        if(n > 0){
            std::swap(arr[0], arr[n-1]);
            n--;
            return arr[n+1];
        }
    }

    int& top() {
        return arr[n-1];
    }

    int size() {
        return n;
    }

    bool empty() {
        return(n==0);
    }

    bool check() {

    }

    void sortIter(){
        int _n = n;
        for(int i = _n; i > 0; i--){
            heapify(i);
            std::swap(arr[0], arr[i-1]);
            _n--;
        }
    }

    void print(){
        for(int i = 0; i < n; i++){
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Heap heap1, heap2;
    heap1.push(3);
    heap1.push(5);
    heap1.push(4);
    heap1.push(2);
    heap1.push(1);
    //heap1.pop();
    heap1.sortIter();
    heap1.print();

    int myarr[] = {9, 8, 7, 6, 10};
    heap2.build(myarr, sizeof(myarr)/ sizeof(myarr[0]));

    heap2.sortIter();
    heap2.print();

    return 0;
}