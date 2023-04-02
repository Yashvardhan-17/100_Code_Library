// question-link: https://practice.geeksforgeeks.org/problems/maximize-number-of-1s0905/1

//logic: maintain the count of zero in the window size

//solution:
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        // code here
        int l = 0;
        int r = 0;
        int zcount = 0;
        int ans = 0;
        
        while(r<n)
        {
            if(arr[r]==0)
            {
                zcount++;
                if(zcount>m)
                {
                    while(zcount>m)
                    {
                        if(arr[l]==0)
                        {
                            zcount--;
                        }
                        l++;
                    }
                }
               
            }
            
            // cout<<l<<" "<<r<<" "<<zcount<<endl;
            r++;
            ans = max(r-l,ans);
            
        }
       

        
        return ans;
    }  
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, m;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        Solution ob;
        auto ans = ob.findZeroes(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends