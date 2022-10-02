#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string& s, int i, int j){
    //base case
    if(i > j){
        return true;
    }
    if(s[i] != s[j]){
        return false;
    } else {
        return checkPalindrome(s, i+1, j-1);
    }
}

int main () {
    string s = "abccba";
    int i = 0;
    int j = s.length() - 1;
    bool is = checkPalindrome(s, i, j);
    if(is){
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}