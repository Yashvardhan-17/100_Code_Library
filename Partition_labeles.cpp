//question link: https://leetcode.com/problems/partition-labels/

//solution:
class Solution {
public:
    vector<int> partitionLabels(string s) {

        if(s.length()==0) return {0};

        int n = s.length();
         
         int label_indices[26];

         for(int i=0;i<n;i++)
         {
             label_indices[s[i]-'a'] = i;
         }

         vector<int> res;

         int st=0;
         int e=0;

         for(int i=0;i<n;i++)
         {
             e = max(e,label_indices[s[i]-'a']);

             if(e == i)
             {
                 res.push_back(e-st+1);
                 st = e+1;
             }
         }

         return res;
        
    }
};