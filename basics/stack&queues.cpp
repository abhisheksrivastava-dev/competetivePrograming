#include <bits/stdc++.h>
using namespace std;

int main(){
	// stack
	stack<int> s;
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	while(!s.empty()){
		cout << s.top() << endl;
		s.pop();
	}

	// queue
	queue<int> q;
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	while(!q.empty()){
		cout << q.front() << endl;
		q.pop();
	}
}
