#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int cost[n][n];
	int i;

	for(i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>cost[i][j];
		}
	}

    int N = pow(2,n);
	int dp[N];
	for(i=0;i<pow(2,n);i++)
	{
		dp[i] = INT_MAX;
	}

	dp[0] = 0;
	int mask;

	for(mask = 0 ; mask<pow(2,n);mask++)
	{
		int x = __builtin_popcount(mask);

		for(int j=0;j<n;j++)
		{
			int m = 1<<j;

			if((mask&m)==0)
			{
				dp[mask|m] = min(dp[mask | m], dp[mask]+cost[x][j]);
			}
		}
	}

	cout<<dp[N-1];
}