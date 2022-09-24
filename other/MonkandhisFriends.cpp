/*
https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/monk-and-his-friends/?fbclid=IwAR1n1FJUNpWIeq7dHY-HytoqqE1nbK9gD4jMjI2UWGTPE8GF4kHROCb7ouA
Monk and his Friends
*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--){
        unordered_set<long long> s;
        int n, m;
        cin >> n >> m;
        for(int i=0; i<(n+m); ++i){
            long long x;
            cin >> x;
            if(i<n){
                s.insert(x);
            }else{
                auto it = s.find(x);
                if(it != s.end()){
                    cout << "YES\n";
                }
                else{
                    cout << "NO\n";
                    s.insert(x);
                }
            }
        }
    }
}
