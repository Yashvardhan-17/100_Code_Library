//question link: https://leetcode.com/problems/palindromic-substrings/

//solution: 
class Solution {
public:
   
    bool check(string s,int i,int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    int countSubstrings(string s) {

        int n = s.length();
        
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(check(s,i,j))
                {
                   count++;
                }
            }
        }

        return count;
    }
};