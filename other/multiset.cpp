/*
Monk and the Magical Candy Bags
https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int t;
		cin >> t;
		int k;
		cin >> k;
		long long total = 0;
		multiset<long long> s;
		for(int i = 0;i < t;++i){
			long long c;
			cin >> c;
			s.insert(c);
		}
		while(k--){
			auto it = s.end();
			it--;
			total = total + (*it);
			s.erase(it);
			s.insert((*it)/2);
		}
		cout << total << endl;
	}
}
