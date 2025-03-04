/*
Binary tree - is a non linear hirarchical data structure which can have 0, 1, 2 child.
Prefect BT - BT having 0 or 2 child
Strict BT (Full)(proper) - BT strictly having 0 or 2 child
Complete BT - all levels are fully filled except possibly the last level, which is filled from left to right.


Heap is a type of complete binary meaning all levels are fully filled except possibly the last level, 
which is filled from left to right. tree which can be of two types - minheap , maxheap
min heap = p < c1, c2
maxheap = p > c1, c2

How to insert element in Heap
- Insert it at next available place
- Heapify (at the inserted place)


How to delete elements in Heap
- Swap it with last element
- Delete it
- Heapify at the swapped place

What is Heap sort?
Heap sort is a comparison based sorting algorithm that uses binary heap data structure
It works by :
    - building heap from given array
    - extracting elemnts one by one from heap while maintaing heap property
TC = O(nlogn)

STEPS for heap sort
1. build max heap or min heap  (max heap - increasing order , minheap - decreasing order)
2. Extract max element from maxheap (root) and swap it with last elemnt in array
    - swap with last elemnt
    - reduce heap size by 1 as last elements are being sorted 
    - heapify root again to regain heap property
3. Repeat unitl all elements are sorted

*/

// implementation of heap sort

#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr, int n, int i) {
    int c1 = 2 * i + 1;
    int c2 = 2 * i + 2;
    int maxi = i;

    if (c1 < n && arr[maxi] < arr[c1]) {
        maxi = c1;
    }
    if (c2 < n && arr[maxi] < arr[c2]) {
        maxi = c2;
    }
    if (maxi != i) {
        swap(arr[i], arr[maxi]);
        heapify(arr, n, maxi);
    }
}

void buildHeap(vector<int> &arr, int n) {
    for (int i = n / 2 - 1; i >= 0; i--) { // FIX: Start from n/2 - 1
        heapify(arr, n, i);
    }
}

void heapSort(vector<int> &arr, int n) {
    buildHeap(arr, n);

    // Extract elements from heap one by one
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]); // Move max to end
        heapify(arr, i, 0);   // Heapify reduced heap
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    heapSort(arr, n);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
