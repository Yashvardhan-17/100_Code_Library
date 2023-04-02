//question: https://leetcode.com/problems/string-compression/

//solution:
class Solution {
public:
    int compress(vector<char>& chars) {

        int n = chars.size();
        int ansindex =0 ;
        int i=0;

        while(i<n)
        {
            int j = i+1;
            while(j<n && chars[i]==chars[j])
            {
                j++;
            }

            chars[ansindex++] = chars[i];
            int count = j-i;

            if(count>1)
            {
                string cnt = to_string(count);
                for(auto ch:cnt)
                {
                    chars[ansindex++] = ch;
                }
            }
            i=j;
        }
        
        return ansindex;
    }
};