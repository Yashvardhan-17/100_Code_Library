//question: https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/adjacent-sum-greater-than-k-f41e3ec4/

//solution:
#include <bits/stdc++.h>
using namespace std;


void solve(unordered_map<int,int> mp,int n,int k)
{
   vector<int> v;   
   unordered_map<int,int> ans;
   int t=2;
   int c=2;

   v.push_back(1);
   mp[1]=0;
   ans[1]=1;
   if(t>=k)
   {
	 cout<<1<<" ";
	 for(int i=2;i<=n;i++)
	 {
		cout<<i<<" ";
	 }
	 cout<<endl;
	 return;
   }
   int prev=k-1;
   if(mp[prev]==1)
   {
      v.push_back(prev);
	  mp[prev]=0;
	  ans[prev]=1;
	  while(c<n)
	  {
		 if(mp[t]==0)
		 {
			t++;
		 }
		 else if(prev+t>=k && mp[t]==1)
		 {
			v.push_back(t);
			ans[t]=1;
			mp[t]=0;
			prev=t;
			t++;
			c++;
		 }
		 else if(mp[k-prev]==1 && ans[k-prev]==0)
		 {
            v.push_back(k-prev);
			mp[k-prev]=0;
			ans[k-prev]=1;
			prev=k-prev;
			c++;
		 }
		 else
		 {
			cout<<-1<<endl;
			return;
		 }
	  }
   }
   else
   {
	 cout<<-1<<endl;
	 return;
   }

   for(int i=0;i<n;i++)
   {
	  cout<<v[i]<<" ";
   }
   cout<<endl;
   return;
}

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		int k;
		cin>>k;
		unordered_map<int,int> mp;

		for(int i=0;i<n;i++)
		{
			mp[i+1]=1;
		}

		solve(mp,n,k);
	}
	return 0;
}