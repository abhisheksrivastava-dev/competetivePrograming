#include <bits/stdc++.h>
using namespace std;

void printSet(set<string> &s){
	for(auto &value : s){
		cout << value << endl;
	}
}

void printMultiSet(multiset<string> &s){
	for(auto &value : s){
		cout << value << endl;
	}
}

int main(){
	// set<string> s; // unique element
	// s.insert("abc");// O(logn) 	
	// s.insert("cdc");
	// s.insert("bcd");
	// auto it = s.find("abc");// O(log n)
	// cout << (*it) << endl;
	// s.erase(it);
	// // s.erase("abc");
	// printSet(s);
	/*
print the unique string into lexiographical order.
input :- 8
abc
def
abc
ghj
jkl
ghj
ghj
abc
Program:- 
	int n;
	cin >> n;
	set<string> s;
	for(int i = 0;i < n;++i){
		string c;
		cin >> c;
		s.insert(c);
	}
	for(auto &value : s){
		cout << value << endl;
	}*/
	/*
print the string present or not
input:- 
8
abc
def
abc
ghj
jkl
ghj
ghj
abc
3
abc
ghj
abcfgwe

Program: 
	int n;
	cin >> n;
	unordered_set<string> s;
	for(int i = 0;i < n;++i){
		string c;
		cin >> c;
		s.insert(c);
	}
	int q;
	cin >> q;
	while(q--){
		string st;
		cin >> st;
		if(s.find(st) == s.end()){
			cout << "No\n";
		} else {
			cout << "Yes\n";
		}
	}
	*/
	// multiset can store duplicates values
	multiset<string> s; 
	s.insert("abc");// O(logn) 	
	s.insert("cdc");
	s.insert("bcd");
	s.insert("abc");// O(logn) 	
	auto it = s.find("abc");// O(log n)
	// cout << (*it) << endl;
	s.erase(it); // delete only that iterator value
	s.erase("abc"); // delete all
	// s.erase("abc");
	printMultiSet(s);
}
