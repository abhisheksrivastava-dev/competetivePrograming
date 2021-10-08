/*

Example 1:

Input:
string1 = "computer"
string2 = "cat"
Output: "ompuer"
Explanation: After removing characters(c, a, t)
from string1 we get "ompuer".

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	string str,str1;
	cin >> str >> str1;
	for(int i = 0; i < str1.size(); i++){
		for(int j = 0;j < str.size(); j++){
			if(str1[i] == str[j]){
				str.erase(j,1);
			}
		}
	}
	cout << str;
}
