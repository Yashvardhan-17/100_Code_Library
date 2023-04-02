//question: https://leetcode.com/problems/two-sum/

//solution:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int>s;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size() && i!=j;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    if(i>j)
                    {
                        s.push_back(j);
                        s.push_back(i);
                    }
                    else
                    {
                        s.push_back(i);
                        s.push_back(j);
                    }
                }
            }
        }
        return s;
        
    }
};