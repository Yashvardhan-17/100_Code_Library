//question: https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1

//solution:
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        
        unordered_map<int,int> mp;
        int x=0;
        for(int i=0;i<n;i++)
        {
            x=x^arr[i];
            mp[arr[i]]++;
        }
        
        for(int i=1;i<=n;i++)
        {
            x=x^i;
        }
        
        int a;
        
        for(auto it:mp)
        {
            if(it.second>1)
            {
                a=it.first;
            }
        }
        
        arr[0]=a;
        arr[1]=x^a;
        
        
        
        
        return arr;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends