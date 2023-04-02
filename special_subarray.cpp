//question: https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/special-subarray-3-4de176ca/

//solution:#include <bits/stdc++.h>
using namespace std;
int subarray(vector<int> v,int n)
{
	int sum = 0;
	int xr;
	int ans =0;
	for(int i=0;i<n;i++)
	{ 
		xr=v[i];
		sum =v[i];
		if(xr == sum)
		{
               ans++;
		}
		for(int j=i+1;j<n;j++)
		{
			xr = xr ^ v[j];
			sum = sum +v[j];
			if(xr == sum)
			{
               ans++;
			}
			else
			{
				break;
			}			

		}
	}
	return ans;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			v.push_back(temp);
		}
		
        cout<<subarray(v,n)<<endl;
		

	}
}