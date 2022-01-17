// Merge Sort O(nlogn)

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N];

void merge(int l, int r, int mid){
	int l_size = mid - l + 1;
	int r_size = r - mid; //r - (mid + 1) + 1;
	int l_a[l_size], r_a[r_size];
	for(int i = 0;i < l_size;++i){
		l_a[i] = a[i+l];
	}
	for(int i = 0;i < r_size;++i){
		r_a[i] = a[i+mid+1];
	}
	l_a[l_size] = r_a[r_size] = INT_MAX;
	int i_l=0;
	int i_r=0;
	for(int i = l; i <= r;++i){
		if(l_a[i_l] < r_a[i_r]){
			a[i] = l_a[i_l];
			i_l++;
		} else {
			a[i] = r_a[i_r];
			i_r++;
		}
	}
}

void mergeSort(int l, int r){
	if(l == r) return;
	int mid = (l+r) / 2;
	mergeSort(l, mid);
	mergeSort(mid + 1, r);
	merge(l, r, mid);
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	mergeSort(0, n-1);
	for(int i = 0;i < n;i++){
		cout << a[i] << " ";
	}
}
