//question link: https://leetcode.com/problems/valid-palindrome/

//solution:

class Solution {
public:
    bool valid(char ch)
    {
        if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
        {
            return true;
        }
        return false;
    }

    bool check(char ch)
    {
        if(ch>='A' && ch<='Z')
        {
            return true;
        }

        return false;
    }
    bool isPalindrome(string s) {
        
        string res = "";
        for(int i =0;i<s.length();i++)
        {
            if(valid(s[i]))
            {
                res = res + s[i];
            }
        }

        for(int i=0;i<res.length();i++)
        {
            if(check(res[i]))
            {
                 char temp = res[i] - 'A' + 'a';
                 res[i] = temp;
            }
            
        }
        // cout<<res;
         
         int st = 0;
         int e = res.length()-1;

         while(st<=e)
         {
             if(res[st]!=res[e])
             {
                 return false;
             }
             else
             {
                 st++;
                 e--;
             }
         }

         return true;

    }
};