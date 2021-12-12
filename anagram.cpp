#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string t,s;
        cin>>t>>s;
        int v[26];
        for (int i = 0; i < 26; i++)
        {
            v[i]=0;
        }
        for (int i = 0; i < t.size(); i++)
        {
            v[t[i]-97]++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            v[s[i]-97]--;
        }
        int no_of=0;
        for (int i = 0; i < 26; i++)
        {
            no_of+=abs(v[i]);
        }
        cout<<no_of<<endl;
    }
    return 0;
}
