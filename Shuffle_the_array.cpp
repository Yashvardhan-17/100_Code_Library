// question link:https://leetcode.com/problems/shuffle-the-array/

//solution:

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int> a;
        vector<int> res;
        int i;
        for(i=0;i<n;i++)
        {
           a.push_back(nums[i]);
        }


        int j=0,flag=1;
        while(j<n || i<nums.size())
        {
            if(flag)
            {
                res.push_back(nums[j]);
                j++;
                flag=0;
            }
            else
            {
                res.push_back(nums[i]);
                i++;
                flag=1;
            }
        }


        return res;
    }
};