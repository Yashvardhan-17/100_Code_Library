//question: https://leetcode.com/problems/jewels-and-stones/

//solution:
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        unordered_map<char,int> mp;

        for(int i=0;i<jewels.length();i++)
        {
            mp[jewels[i]]++;
        }

        int count=0;

        for(int i=0;i<stones.length();i++)
        {
            if(mp[stones[i]])
            {
                count++;
            }
        }

        return count;
    }
};