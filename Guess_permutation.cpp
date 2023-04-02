// question: https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/permutation-swaps-2-01766245/

//solution: 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(int a[],int n)
{
	int prefix[n+1];
	prefix[0]=0;
	int sum = 0;

	for(int i=1;i<=n;i++)
	{
		sum=sum+a[i-1];
       prefix[i]=sum;
	}
	int maxi=prefix[0];
	int mini=prefix[n];

	for(int i=0;i<n+1;i++)
	{
        maxi = max(maxi,prefix[i]);
		mini = min(mini,prefix[i]);
	}

    int loop = (mini*(-1))+1;
	
    
}



int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;

		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}

		
	    solve(a,n);


	}
}