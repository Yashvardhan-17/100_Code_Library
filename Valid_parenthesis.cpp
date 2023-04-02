//question link:https://leetcode.com/problems/valid-parentheses/

//solution:
class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(int i=0;s[i]!=00;i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
                st.push(s[i]);
            }
            else if(s[i]==')' && (st.empty() || st.top()!='(')) 
                return false;
            else if(s[i]==']' && (st.empty() ||st.top()!='['))
                return false;
            else if(s[i]=='}' && (st.empty() || st.top()!='{'))
                return false;
            else
                st.pop();
        }
        if(!st.empty())
        {
            return false;
        }
        return true;
     }
};