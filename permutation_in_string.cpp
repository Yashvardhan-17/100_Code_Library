//question: https://leetcode.com/problems/permutation-in-string/

//solution:
class Solution {
     bool checkequal(int a[26],int b[26])
    {
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i])
            {
                return false;
            }
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {

        int count1[26] = {0};
        // cout<<count1[4]<<endl;

        for(int i=0;i<s1.length();i++)
        {
            int index = s1[i] - 'a';
            count1[index]++;
        }

        int i = 0;
        int window = s1.length();
        int count2[26] = {0};

        while(i<window && i<s2.length())
        {
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }
        
        if(checkequal(count1,count2))
        {
            return 1;
        }


        while(i<s2.size())
        {
           
            // cout<<index<<endl;
            count2[s2[i] - 'a']++;

            int index = s2[i-window]-'a';
            count2[index]--;
            i++;
            if(checkequal(count1,count2))
            {
              return true;
            }
        }       

        return false;
    }
};