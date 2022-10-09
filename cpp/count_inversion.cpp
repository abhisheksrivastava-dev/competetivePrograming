#include<bits/stdc++.h>
using namespace std;

//brute force
int getInversions(int * A, int n) {
  int count = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (A[i] > A[j]) {
        ++count;
      }
    }
  }
  return count;
}

// Merge Sort Approach 
long long merge(long long arr[], long long left, long long mid, long long right) {
      long long i = left, j = mid, k = 0;
      long long invCount = 0;
      long long temp[(right - left + 1)];
     
      while ((i < mid) && (j <= right)) {
        if (arr[i] <= arr[j]) {
          temp[k] = arr[i];
          ++k;
          ++i;
        } else {
          temp[k] = arr[j];
          invCount += (mid - i);
          ++k;
          ++j;
        }
      }
     
      while (i < mid) {
        temp[k] = arr[i];
        ++k;
        ++i;
      }
     
      while (j <= right) {
        temp[k] = arr[j];
        ++k;
        ++j;
      }
     
      for (i = left, k = 0; i <= right; i++, k++) {
        arr[i] = temp[k];
      }
     
      return invCount;
    }
  
    long long mergeSort(long long arr[], long long left, long long right) {
      long long invCount = 0;
     
      if (right > left) {
        long long mid = left + (right - left)/2;
        invCount = mergeSort(arr, left, mid);
        invCount += mergeSort(arr, mid + 1, right);
        invCount += merge(arr, left, mid + 1, right);
      }
      return invCount;
    }
    
    long long int getInversionsMerge(long long arr[], long long N)
    {
        return mergeSort(arr, 0, N - 1);
    }

int main () {
    int arr[5] = {6, 3, 5 ,2, 7};
    cout << getInversions(arr, 5) << endl;
    long long arrMerge[5] = {6, 3, 5 ,2, 7};
    cout << getInversionsMerge(arrMerge, 5) << endl;
    return 0;
}