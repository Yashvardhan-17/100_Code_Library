// question : https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/largest-number-7-eee0b7c3/

//solution: 
#include <bits/stdc++.h>
using namespace std;


int main() {
	
	string s;
	cin>>s;
	int k;
	cin>>k;



	string ans;
	ans.push_back(s[0]);

    int i=0;
	int j=1;
	int flag=0;

	while(k>0)
	{
		if(flag==1 || s[j]==00)
		{
			break;
		}


		if(s[j]>ans[i])
		{
            while(i>-1)
			{
				if(s[j]>ans[i])
				{
					ans.pop_back();
					i--;
					k--;
				}
				else
				{
					break;
				}
				
				if(k==0 || s[j]==00)
				{
					flag=1;
					break;
				}
			}
			ans.push_back(s[j]);
			i++;
			j++;
		}
		else
		{
			ans.push_back(s[j]);
			j++;
			i++;
		}
	}

	if(k==0)
	{
       while(s[j]!=00)
	   {
		 ans.push_back(s[j]);
		 j++;
	   }
	}
	else
	{
		while(k--)
		{
			ans.pop_back();
		}
	}

	cout<<ans<<endl;

}