#include<bits/stdc++.h>
using namespace std;

void reverse(int i, int j, string& s){
    //base case
    if(i > j){
        return;
    }
    swap(s[i], s[j]);
    i++;
    j--;
    reverse(i, j, s);
}

int main () {
    string s = "abcdef";
    int i = 0;
    int j = s.length() - 1;
    reverse(i, j, s);
    cout << s << endl;
    return 0;
}