// question link: https://leetcode.com/problems/permutations/

//solution:
class Solution {
public:

    void permutations(vector<int> &nums,vector<vector<int>> &ans,vector<int> &ds,int freq[])
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }

        for(int i=0;i<nums.size();i++)
        {
            if(freq[i]==0)
            {
                ds.push_back(nums[i]);
                freq[i]=1;
                permutations(nums,ans,ds,freq);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> ds;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++) freq[i]=0;

        permutations(nums,ans,ds,freq);

        return ans;
        
    }
};