//The Monk and Class Marks
//https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/

#include <bits/stdc++.h>
using namespace std;

int main(){
	//solution 1
	// map<int, multiset<string> > m; 
	// int n;
	// cin >> n;
	// while(n--){
	// 	string name;
	// 	int marks;
	// 	cin >> name >> marks;
	// 	m[marks].insert(name);
	// }
	// auto it = --m.end();
	// while(true){
	// 	auto &students = (*it).second;
	// 	int marks = (*it).first;
	// 	for(auto student : students){
	// 		cout << student << " " << marks << endl;
	// 	}
	// 	if(it == m.begin()) break;
	// 	it--;
	// }
	// solution 2
	map<int, multiset<string> > m; 
	int n;
	cin >> n;
	while(n--){
		string name;
		int marks;
		cin >> name >> marks;
		m[-1*marks].insert(name);
	}
	for(auto &marks_student_pr: m){
		auto &students = marks_student_pr.second;
		int marks = marks_student_pr.first;
		for(auto student : students){
			cout << student << " " << -1*marks << endl;
		}
	}		
}
