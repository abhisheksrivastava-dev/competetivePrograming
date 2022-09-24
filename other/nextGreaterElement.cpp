#include <bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> v){
	vector<int> nge(v.size());
	stack<int> st;
	int limit = v.size();
	for(int i = 0;i < limit;++i){
		while(!st.empty() && v[i] > v[st.top()]){
			nge[st.top()] = i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		nge[st.top()] = -1;
		st.pop();
	}
	return nge;
}

int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int j = 0;j < n;++j){
		cin >> v[j];    
	}
	vector<int> nge = NGE(v);
	for(int k = 0;k < n;++k){
		cout << v[k] << " " << (nge[k] == -1 ? -1 : v[nge[k]]) << endl;
	}
}
