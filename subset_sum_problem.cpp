Question Link -: https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab


Solution -:

//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n = arr.size();
        int ss[n+1][sum+1];
        
        for(int i=1;i<=sum;i++)
        {
            ss[0][i] = 0;
        }
        
        for(int i=0;i<n+1;i++)
        {
            ss[i][0] = 1;
        }
        
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                if(ss[i-1][j] == 1)
                {
                    ss[i][j]=1;
                }
                
                else if(arr[i-1]>j)
                {
                    ss[i][j]= 0 ;
                }
                else
                {
                   ss[i][j] = ss[i-1][j-arr[i-1]];
                }
            }
        }
        
        return ss[n][sum];
        
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends