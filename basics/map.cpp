#include <bits/stdc++.h>
using namespace std;

void printMap(map<int, string> &m){
	cout << "Size of Map " << m.size() << endl;
	for(auto &pr : m){
		cout << pr.first << " " << pr.second << endl;
	}
}

int main(){
	// map implemented on red black trees
	// maps are not continous
	map<int, string> m;
	m[1] = "abc"; //O(logn)
	m[5] = "cdc";
	m[3] = "acd";
	m.insert({4, "afg"}); //O(logn)
	// map<int, string> :: iterator it;
	// for(it = m.begin();it != m.end();++it){
	// 	cout << (*it).first << " " << (*it).second << endl;
	// }
	// if key is string then insertion time complexity will be O(s.size() * logn)
	for(auto &pr : m){
		cout << pr.first << " " << pr.second << endl;
	}
	auto it = m.find(7); //O(logn)
	m.erase(3); //O(logn)
	m.clear(); // clear all value of map
	if(it == m.end()){
		cout << "NO VALuE" << endl;
	} else {
		cout << (*it).first << " " << (*it).second << endl;
	}
	printMap(m);
	
	// unordermap
	// 1. inbuilt implemetation - Hash Tables
	// 2. time complexity O(1)
	// 3.valid keys datatype
	unordered_map<int, string> u_m;

}
