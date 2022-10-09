#include<bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n){

    
    if(arr[0]>=n-1) {      // checking for first element if it directly jumps to end
        if(arr[0]>0)return 1;    // return only  one jump
        else return 0;           // if curr index is end the simply no jump can be made
    }                          // hence return 0 jump
    
    int ct=0,i,c;
    for( i=0;i<n-1; )
    {
        c= arr[i];
        int x=i;
        if(c==0 && i<n-1) return -1;   // if jumped pos has 0 so cannot move further
        int max= c+i;                  // max position possible from i th index 
        if(c+i<n) max += arr[c+i];    // and from there max position to reach end faster
        i=c+i;ct++;                   // initially ith index is max length of jump from 
        if(max>=n-1) break;           // curr index element and if it jumps to end or 
                                    // more then break the loop
        for(int j=x+1;j<c+x && j<n ;j++)
        {
            if(max<arr[j]+j)       // if within jumping some element can make you jump
            {                     //  farther than max then update max and ith index
                max=arr[j]+j;
                i=j;
            }
        }
        
    }
    if(i<n-1)                    // if last index has not reached beacaue max >= n-1
    return ct+1;                 // make one more jump
    else
    return ct;             // if last index has been reached, simply return the jump
}

int main () {
    
}