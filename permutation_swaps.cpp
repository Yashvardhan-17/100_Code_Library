//question:https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/guess-permutation-2-be0b2b90/

//solution:
#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> v,int n)
{
	long sum=0;
	long s=0;
	int f=0;
	for(int i=0;i<n;i++)
	{
		sum = sum+v[i];
		s = s + i+1;
		if(s>sum)
		{
            f=1;
			break;
		}
	}

	if(s == sum && f==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}

	
}

int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			int t;
			cin>>t;
			v.push_back(t);

		}

		if(check(v,n))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}     // Writing output to STDOUT
}
