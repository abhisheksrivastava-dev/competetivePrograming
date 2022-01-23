/*
https://www.geeksforgeeks.org/know-your-sorting-algorithm-set-2-introsort-cs-sorting-weapon/
*/

#include <bits/stdc++.h>
using namespace std;

// bool should_i_swap(int a, int b){
// 	if(a < b){
// 		return true;
// 	}
// 	return false;
// }

bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.first != b.first){
		if(a.first > b.first){
			return false;
		}
		return true;
	} else {
		if(a.second < b.second){
			return false;
		}
		return true;
	}
}

/*
6
4 3
5 5
5 3
25 6
7 9
8 5
*/

int main(){
	int n;
	cin >> n;
	vector<pair<int, int>> v(n);
	for(int j = 0;j < n;++j){
		cin >> v[j].first >> v[j].second;    
	}
	// for(int i = 0;i < n;++i){
	// 	for(int j = i + 1;j < n;++j){
	// 		if(should_i_swap(v[i], v[j])){
	// 			swap(v[i], v[j]);
	// 		}
	// 	}
	// }
	sort(v.begin(), v.end(),cmp);// sorting start, sorting end + 1, comparator function
	/*
	intro sort
	mixture of three algo
	1. Quick sort
	2. heap sort
	3. insertion sort
	*/
	for(int i = 0;i < n;++i){
		cout << v[i].first << " " << v[i].second << endl;
	}
	cout << endl;
}
