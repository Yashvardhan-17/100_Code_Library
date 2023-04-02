//Question-link: - https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article


#include<bits/stdc++.h>
using namespace std;



class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int w, int weight[], int value[], int n) 
    { 
    
    	int dp[n+1][w+1];
    
    	for(int i=0;i<n+1;i++)
    	{
    		dp[i][0]=0;
    	}
    
    	for(int i=0;i<w+1;i++)
    	{
    		dp[0][i]=0;
    	}
    
    	for(int i=1;i<=n;i++)
    	{
    		for(int j=1;j<=w;j++)
    		{
    			if(weight[i-1]>j)
    			{
    				dp[i][j]=dp[i-1][j];
    			}
    			else
    			{
    				dp[i][j] = max((value[i-1]+dp[i-1][j-weight[i-1]]),dp[i-1][j]);
    			}
    		}
    	}
    
    	return dp[n][w];
    }
};


int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;

        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
