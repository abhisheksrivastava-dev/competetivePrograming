 #include <bits/stdc++.h>
using namespace std;
int main(){
	/*
	Vectors
	int n;
	cin >> n;
	vector<int> v(n);
	for(int j = 0;j < n;++j){
		cin >> v[j];    
	}
	sort(v.begin(), v.end());
	
	intro sort
	mixture of three algo
	1. Quick sort
	2. heap sort
	3. insertion sort
	
	for(int i = 0;i < n;++i){
		cout << v[i] << " ";
	}
	cout << endl;
	auto it = upper_bound(v.begin(), v.end(), 6);
	if(it == v.end()){
		cout << "NOT FOUND";
	}
	cout << (*it) << endl;
	*/

	/*
	Arrays
	int n;
	cin >> n;
	int v[n];
	for(int j = 0;j < n;++j){
		cin >> v[j];    
	}
	sort(v, v+n);
		
	for(int i = 0;i < n;++i){
		cout << v[i] << " ";
	}
	cout << endl;
	auto *ptr = upper_bound(v, v+n, 6);
	if(ptr == v+n){
		cout << "NOT FOUND";
	}
	cout << (*ptr) << endl;
	*/

	/*
	set/map/pair
	int n;
	cin >> n;
	set<int> s;
	for(int j = 0;j < n;++j){
		int x;
		cin >> x;
		s.insert(x);
	}
	
	auto it = s.lower_bound(6);
	if(it == s.end()){
		cout << "NOT FOUND";
	}
	cout << (*it) << endl;

	// in case of map we can use the same code and in map lower bound and upper bound applies over the key.
	*/
}
