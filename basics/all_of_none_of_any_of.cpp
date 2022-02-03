#include <bits/stdc++.h>
using namespace std;

bool is_positive(int x){
	return x > 0;
}

int main(){
	// auto sum = [](int x, int y){return x + y;}; //Lambda Function/Expression
	// cout << sum(2, 3) << endl;

	vector<int> v = {2, -3, -4};
	vector<int> vt = {2, -4, 6};
	cout << "if all condition are satisfied return 1 else 0:- " << all_of(v.begin(), v.end(), 
		[](int x){return x > 0;}) << endl;

	cout << ":- " << all_of(v.begin(), v.end(), is_positive) << endl;

	cout << "If any condition return true then print 1 or if all are false the it return 0:- " << any_of(v.begin(), v.end(),
		[](int x){return x > 0;}) << endl;

	cout << "If all condition return false then print 1 or if all are true or any one of return true the it return 0:- " << none_of(v.begin(), v.end(),
		[](int x){return x > 0;}) << endl;
	cout << "if all condition are satisfied return 1 else 0:- " << all_of(vt.begin(), vt.end(), 
		[](int x){return x % 2 == 0;}) << endl;
}
