#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size){
    //base case 
    if(size == 0 || size == 1)
    {
        return true;
    }

    // recursion
    if(arr[0] > arr [1])
    {
        return false;
    } else {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}

int sum(int arr[], int size) {
    //base case 
    if(size == 0)
    {
        return 0;
    }

    if(size == 1){
        return arr[0];
    }

    int remainingPart = sum(arr + 1, size - 1);
    int sum = arr[0] + remainingPart;
    return sum;

    // recursion
}

bool isLinearSearch(int arr[], int size, int key){
    //base case 
    if(size == 0){
        return false;
    }
    // recursion
    if(arr[0] == key)
    {
        return true;
    } else {
        bool remainingPart = isLinearSearch(arr + 1, size - 1, key);
        return remainingPart;
    }
}

bool binarySearch(int *arr, int s, int e , int k ) {

    //base case

    //element not found
    if(s>e)
        return false;

    int mid = s + (e-s)/2;

    //element found
    if(arr[mid] == k)
        return true;

    if(arr[mid] < k) {
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }
}

int main () {
    int arr[5] = {1, 2, 3, 7, 5};

    bool ans = isSorted(arr, 5);
    if(ans){
        cout << "Array is Sorted" << endl;
    } else {
        cout << "Array is not Sorted" << endl;
    }

    int sume = sum(arr, 5);
    cout << "Sum of array " << sume << endl;

    bool keyFound = isLinearSearch(arr, 5, 7);
    if(keyFound) {
        cout << "Linear Search Key Found" << endl; 
    } else {
        cout << "Linear Search Key Not Found" << endl; 
    }

    bool keyFoundBinary = binarySearch(arr, 0, 4, 88);
    if(keyFoundBinary) {
        cout << "Binary Search Key Found" << endl; 
    } else {
        cout << "Binary Search Key Not Found" << endl; 
    }
    return 0;
}