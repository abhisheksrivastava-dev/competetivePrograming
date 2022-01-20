#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v = {2,3,5,6,7};
	for(int i = 0; i < v.size();++i){
		cout << v[i] << " ";
	}
	cout << endl;
	// iterator for lopping the container
	vector<int> :: iterator it = v.begin();
	// cout << (*(it+3)) << endl;
	for(it = v.begin();it != v.end();++it){
		cout << *it << endl;
	}

	vector<pair<int,int>> v_p = {{1,2}, {2,3}, {3,4}};
	vector<pair<int, int>> :: iterator it_p;
	for(it_p = v_p.begin();it_p != v_p.end();++it_p){
		cout << (*it_p).first << " " << (*it_p).second << endl; 
	}

	// (*it_p).first === (it_p->first)

	// range base loops
	for(int value : v){
		cout << value << " "; // copy of value
	}
	cout << endl;

	// reference
	for(int &value : v){
		cout << value << " ";
	}
	cout << endl;

	for(pair<int, int> &value : v_p){
		cout << value.first << " " << value.second << endl;
	}

	// Auto keyword
	// vector<pair<int, int>> :: iterator it_p;
	for(auto it_p_a = v_p.begin();it_p_a != v_p.end();++it_p_a){
		cout << (*it_p_a).first << " " << (*it_p_a).second << endl; 
	}

	for(auto &value : v_p){
		cout << value.first << " " << value.second << endl;
	}
}
