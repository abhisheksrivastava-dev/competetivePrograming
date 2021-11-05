/*
  Input: N = 6, M = 5
  A[] = {1, 2, 3, 4, 5, 10}
  B[] = {2, 3, 1, 0, 5}
  Output: 4 10
  Explanation: 4 and 10 are present in 
  first array, but not in second array.
*/
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	vector<long long> findMissing(long long a[], long long b[],  
                 int n, int m) 
	{ 
	    map<long long int,long long int> m1;
	    for(int i=0;i<m;i++)
	    {
	        m1[b[i]]++;
	    }
	    vector<long long int> v;
	    for(int i=0;i<n;i++)
	    {
	        if(m1[a[i]]==0)
	        v.push_back(a[i]);
	    } 
	    return v;
	} 
};
	

// { Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        int m;
        cin>>m;
        long long a[n];
        long long b[m];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin >> b[i];
        vector<long long> ans;
        

        Solution ob;
        ans=ob.findMissing(a,b,n,m);
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends
