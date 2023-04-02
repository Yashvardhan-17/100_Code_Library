// question : https://www.hackerearth.com/problem/algorithm/is-palindrome-2-eb50514b/

//solution:
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool check(string str)
{
	int st=0;
	int e=str.size()-1;

	while(st<=e)
	{
		if(str[st]!=str[e])
		{
			return false;
		}
		st++;
		e--;
	}
	return true;
}

int main() {
	string s;
	cin>>s;

	int t;
	cin>>t;
	int q,l,r;
	char ch;
	while(t--)
	{
		cin>>q;
		if(q==1)
		{
			cin>>l>>r>>ch;
			int i=l-1;
			while(i<r)
			{
				s[i] = ch;
				i++;
			}
			// cout<<s<<endl;
		}
		else
		{
			cin>>l>>r;
			string str="";
			int i=l-1;
			int flag=1;
			while(i<r)
			{
				str = str + s[i];
				i++;
			}
			
			if(check(str))
			{
				cout<<"Yes"<<endl;
			}
			else
			{
				sort(str.begin(),str.end());
                int n =str.size();
				
				do
				{
					if(check(str))
					{
						cout<<"Yes"<<endl;
						flag=0;
                        break;
					}
				}while(next_permutation(str.begin(), str.end()));
				if(flag)
				{
					cout<<"No"<<endl;
				}
				
				
			}          
			
			
		}
	}
}