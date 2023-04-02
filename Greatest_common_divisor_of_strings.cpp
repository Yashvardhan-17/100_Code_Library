//question: https://leetcode.com/problems/greatest-common-divisor-of-strings/

//solution:
class Solution {
public:

    int gcd(int a,int b)
    {
        if(a==0)
        {
            return b;
        }
        else if(b==0)
        {
            return a;
        }

        if(a==b)
        {
            return a;
        }

        if(a>b)
           return gcd(a-b,b);
        return gcd(a,b-a);
    }
    string gcdOfStrings(string str1, string str2) {

        if(str1+str2 != str2+str1)
        {
            return "";
        }

        int hcd = gcd(str1.length(),str2.length());

        string s = "";

        for(int i=0;i<hcd;i++)
        {
            s = s + str2[i];
        }

        return s;
        
    }
};