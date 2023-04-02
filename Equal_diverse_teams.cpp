// question: https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/equal-diverse-teams-cbdb8fe2/
// solution :
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n,k;
		cin>>n>>k;

		unordered_map<int,int> mp;
		for(int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			mp[temp]++;
		}

        int u=0,nu=0;
		for(auto it:mp)
		{
			if(it.second>1)
			{
				nu++;
			}
			else
			{
				u++;
			}
		}


		if(u+nu<=2*k && (u/2)+nu>=k)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}


	}
}