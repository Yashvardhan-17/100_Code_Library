// question: https://practice.geeksforgeeks.org/problems/even-swap/1

//solution:

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        vector <int> lexicographicallyLargest(vector <int> &a,int n)
        {
            // int counter=0;
            int s=0;
            int i=0;
            while(i<n-1)
            {
                if((a[i]+a[i+1])%2)
                {
                    
                    i++;
                    sort(a.begin()+s,a.begin()+i,greater<int>());
                    s=i;
                }
                else
                {
                    i++;
                }
            }
            sort(a.begin()+s,a.begin()+n,greater<int>());
            // cout<<i<<endl;
            
        
             return a;
        }
        
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> a(n);
        for(auto &j:a)
            cin>>j;
        Solution s;
        vector <int> b=s.lexicographicallyLargest(a,n);
        for(auto i:b)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends