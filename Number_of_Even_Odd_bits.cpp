// question link: https://leetcode.com/contest/weekly-contest-337/problems/number-of-even-and-odd-bits/

//solution :
class Solution {
public:
    vector<int> evenOddBit(int n) {       
        vector<int> ans;
        vector<int> a;
        
        while(n!=0)
        {
            if(n&1)
            {
               a.push_back(1);
            }
            else
            {
               a.push_back(0);
            }
            
            n = n>>1;
        }
         
        
        int c1=0,c2=0;
        n = a.size();
        for(int i=0;i<n;i++)
        {
            if(i%2==1 && a[i]==1)
            {
               c2++;
            }
            
            else if(i%2==0 && a[i]==1)
            {
               c1++;
            }
            
        }
        
        ans.push_back(c1);
        ans.push_back(c2);
        return ans;
        
        
    }
};