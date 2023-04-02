//question: https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/horse-race-122f4ccc/

//solution:
#include <bits/stdc++.h>
using namespace std;


bool check(vector<int> v,int n)
{
	for(int i=0;i<n-1;i++)
	{
       if(v[i]!=v[i+1])
	   {
		return true;
	   }
	}
	return false;
}

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n,m,x;
		cin>>n>>m>>x;

		unordered_map<int,int> mp;
		int count=0;

		for(int i=0;i<n;i++)
		{
			int c;
			cin>>c;
			mp[c]++;
			if(c>m)
			{
				count++;
			}		
		}
		vector<int> v;
		// set<int> s;
		for(int i=1;i<=m;i++)
		{
			v.push_back(mp[i]);
			// s.insert(mp[i]);
		}
		sort(v.begin(),v.end());
		
		while(count>0 && x>0)
		{
			v[0]++;
			// s.insert(v[0]);
			int i=1;			
			while(v[0]>v[i])
			{
				i++;
			}
			swap(v[0],v[i-1]);			
			x--;
			count--;
		}
		while(x>0)
		{
			if(check(v,m))
			{
				v[0]++;
				// s.insert(v[0]);
				int i=1;			
				while(v[0]>v[i])
				{
					i++;
				}
				swap(v[0],v[i-1]);
				i=m-2;				
				v[m-1]--;
				// s.insert(v[m-1]);
				while(v[m-1]<v[i])
				{
					i--;
				}
				swap(v[m-1],v[i+1]);
				x--;
			}
			else
			{
				break;
			}

		}		
		cout<<v[0]<<endl;		
	}
	return 0;
}
