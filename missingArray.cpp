/*
  Input: N = 6, M = 5
  A[] = {1, 2, 3, 4, 5, 10}
  B[] = {2, 3, 1, 0, 5}
  Output: 4 10
  Explanation: 4 and 10 are present in 
  first array, but not in second array.
*/
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
