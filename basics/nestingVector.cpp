#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){  // always pass vector as reference to avoid copy
	cout << "Size of vector: " << v.size() << endl;
	for(int i = 0;i < v.size();++i){
		cout << v[i] << " ";
	}
	cout << endl;
}

void printVecPair(vector<pair<int, int>> &v){  // always pass vector as reference to avoid copy
	cout << "Size of vector: " << v.size() << endl;
	for(int i = 0;i < v.size();++i){
		cout << v[i].first << " " << v[i].second << endl;
	}
	cout << endl;
}

int main(){
	// vector<int> v;
	// int n;
	// cin >> n;
	// for(int i = 0;i < n;i++){
	// 	int x;
	// 	cin >> x;
	// 	printVec(v);
	// 	v.push_back(x);
	// }
	// vector<int> v_3(10, 3);
	// printVec(v_3);
	// v_3.pop_back();
	// printVec(v_3);
	// //copying of array
	// vector<int> v2 = v_3; // O(n)
	// v2.push_back(5);
	// printVec(v2);
	
	// nesting in vector
	// vector<pair<int, int>> v_pair;// = {{1,2}, {2,3}, {3,4}};
	// printVecPair(v_pair);
	// int n;
	// cin >> n;
	// for(int i = 0;i < n;++i){
	// 	int x, y;
	// 	cin >> x >> y;
	// 	v_pair.push_back({x, y});
	// }
	// printVecPair(v_pair);

	// vector of vector
	int N;
	cin >> N;
	vector<vector<int>> v;
	for(int i = 0;i < N;++i){
		int n;
		cin >> n;
		vector<int> temp;
		for(int j = 0;j < n;++j){
			int x;
			cin >> x;
			temp.push_back(x);
		}
		v.push_back(temp);
	}
	for(int i = 0;i < v.size();++i){
		printVec(v[i]);
	}
}
