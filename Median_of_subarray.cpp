//question link:- https://practice.geeksforgeeks.org/problems/6f08220ca3b871be594f50f7f56a9ef2799cb485/1

//solution:- 
//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long Median(int N,vector<int> A,int M)
    {
        vector<int> v((2*N)+1);
        long long  cur = N, b=0, c=0;
        v[cur]++;
        int x;
        for(int i=0;i<N;i++)
        {
            x=-1;
            if(A[i]>=M)
            {
                x=1;
            }
            if(x==-1)
            {
                b-=v[cur+x];
            }
            else
            {
                b+=v[cur];
            }
            cur+=x;
            c+=b;
            v[cur]++;
            
        }
        return c;
        
    }
    long long countSubarray(int N,vector<int> A,int M) {
        // code here
        
        return Median(N,A,M) - Median(N,A,M+1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin>>N>>M;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution obj;
        auto ans = obj.countSubarray(N,A,M);
        cout<<ans<<endl;
    }
}  
// } Driver Code Ends