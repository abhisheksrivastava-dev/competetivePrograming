#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	/* Vector

	vector<int> v(n);
	for(int i = 0;i < n;++i){
		cin >> v[i];
	}
	int min = *min_element(v.begin(), v.end());
	cout << "MIN " << min << endl;
	int max = *max_element(v.begin(), v.end());
	cout << "MAX " << max << endl;
	int sum = accumulate(v.begin(), v.end(), 0);
	cout << "SUM " << sum << endl;
	int ct = count(v.begin(), v.end(), 6);
	cout << "COUNT OF 6 " << ct << endl;
	auto it = find(v.begin(), v.end(), 10);
	if(it != v.end())
		cout << "FIND ELEMENT " << *(it) << endl;
	else
		cout << "NOT FOUND" << endl;
	reverse(v.begin(), v.end());
	for(auto val : v){
		cout << val << " ";
	}
	cout << endl;
	string s = "abhishek";
	reverse(s.begin(), s.end());
	cout << s << endl;

	*/

	/*
	Array

	int v[n];
	for(int i = 0;i < n;++i){
		cin >> v[i];
	}
	int min = *min_element(v, v + n);
	cout << "MIN " << min << endl;
	int max = *max_element(v, v + n);
	cout << "MAX " << max << endl;
	int sum = accumulate(v, v + n, 0);
	cout << "SUM " << sum << endl;
	int ct = count(v, v + n, 6);
	cout << "COUNT OF 6 " << ct << endl;
	auto it = find(v, v + n, 6);
	if(it != v + n)
		cout << "FIND ELEMENT " << *(it) << endl;
	else
		cout << "NOT FOUND" << endl;
	reverse(v, v + n);
	for(auto val : v){
		cout << val << " ";
	}
	cout << endl;
	string s = "abhishek";
	reverse(s.begin(), s.end());
	cout << s << endl;

	*/
}
