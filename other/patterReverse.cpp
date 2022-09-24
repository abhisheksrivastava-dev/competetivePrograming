/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <bits/stdc++.h>
using namespace std;

int main (){
	int t,num,i,j,k,l,p,s;
    cin >> t;
    while(t--)
    {
        cin >> num;
        for(i=1; i<=num; i++)
        {
            for(j=1;j<=num*2;j++)
            {
                for(k=1;k<=i;k++)
                {
                    cout << "*";
                    j++;
                }
                for(l=1;l<=num-i;l++)
                {
                    cout << "#";
                    j++;
                }
                for(s=num+1;s<=(num*2)-i;s++)
                {
                    cout << "#";
                    j++;
                }
                for(p=(num*2)-i;p<num*2;p++)
                {
                    cout << "*";
                    j++;
                }
            }
            cout << "\n";
            j=1;
        }
        cout << "\n";
    }
}
