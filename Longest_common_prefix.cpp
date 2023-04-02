//question linK: https://leetcode.com/problems/longest-common-prefix/

//solution:
class Solution {
public:
    string check(string s1,string s2)
    {
        string s="";
        int i=0,j=0;
        while(s1[i]!=00 && s2[j]!=00)
        {
            if(s1[i]==s2[j])
            {
                s.push_back(s1[i]);
                i++;
                j++;
            }
            else
            {
                break;
            }
        }
        return s;
    }
    string longestCommonPrefix(vector<string>& strs) {
        
        string res="";
        if(strs.size()==1)
        {
            res=strs[0];
            return res;
        }
        res=check(strs[0],strs[1]);
        for(int i=2;i<strs.size();i++)
        {
            res=check(res,strs[i]);
        }
        return res;
        
           
    }
};